module util.mm.freelist;

private import
	core.memory,
	std.stdint;

/**
	Entirely static allocator based on FreeLists.

	Use only for heavily instanced classes since every injecting class
	will add up to Allocator.PAGE_SIZE bytes to Your memory usage.
	TODO: consider GC-less memory management
	TODO: bitfield for free
*/
mixin template InjectAllocator(T) {
	T add() {
		auto amount = T.sizeof;
		
		static if (amount < AllocatorSmall.MAX_CAPACITY) {
			return cast(T) AllocatorSmall.add(amount);
		}
		static if (amount < AllocatorMedium.MAX_CAPACITY) {
			return cast(T) AllocatorMedium.add(amount);
		}
		// else
		return cast(T) AllocatorLarge.add(amount);
	}
	
	void remove(T p) {
		auto amount = T.sizeof;
		
		static if (amount < AllocatorSmall.MAX_CAPACITY) {
			return AllocatorSmall.remove(p);
		}
		static if (amount < AllocatorMedium.MAX_CAPACITY) {
			return AllocatorMedium.remove(p);
		}
		// else
		return AllocatorLarge.remove(p);
	}
}



abstract class Allocator {
	static immutable ushort ALIGNMENT = 8;	/// bytes
	static immutable PAGE_SIZE = 32_768;
	
	abstract void* add(size_t amount);
	abstract void remove(void* what);
	//TODO: lowmem event
	//TODO: debug/profile
	
	
	static E align_(E : uintptr_t)(E address) {
		return cast(E)((address) + ALIGNMENT - 1) & ~(ALIGNMENT - 1);
	}
	
	struct Page {
		Header h;
		byte[PAGE_SIZE-Header.sizeof] data;
		struct Header {
			void*			data;
			uintptr_t	size;
			Page*			next;
			Page*			prev;
			uintptr_t	largestFree;
			void*			freeList;
		}
	}
}



class AllocatorSmall : Allocator {
	public:
	static immutable uint MAX_CAPACITY = 256;
	static immutable byte ALLOCATOR_ID = cast(byte) 0xAA;
	
	private:
	static FreeBlock*	_listHeads[MAX_CAPACITY/ALIGNMENT+1];
	static Page*				_curPage;
	static ushort			_curPageOffset;
	
	
	
	private:
	this() {};	/// Fully static
	static this() {
		_curPageOffset = align_(cast(ushort)0);
	}
	
	public:
	override static void* add(size_t amount) {
		static if ((void*).sizeof < ALIGNMENT)
			if (amount < (void*).sizeof) {
				amount = (void*).sizeof;
			}
		
		amount = align_(amount);
		
		FreeBlock* freeBlock = _listHeads[amount / ALIGNMENT];
		if (is(freeBlock)) {
			freeBlock.h.id = ALLOCATOR_ID;
	    _listHeads[amount / ALIGNMENT] = freeBlock.next;
	    return freeBlock.next;
		}
		
		uint freeLeft = cast(uint)PAGE_SIZE - _curPageOffset;
	  if (amount >= freeLeft) {
	    _curPage.h.next = _curPage;
	    _curPage = cast(Page*) GC.malloc(PAGE_SIZE);
	  }
	  _curPageOffset = cast(ushort)align_(0);
	  
	  freeBlock = cast(FreeBlock*) _curPage.data + _curPageOffset;
	  freeBlock.h.slot = cast(ubyte) amount/ALIGNMENT;
	  freeBlock.h.id = ALLOCATOR_ID;
	  _curPageOffset += amount + FreeBlock.h.sizeof;
	  
	  return freeBlock.data;
	}
	
	override static void remove(void* what) {
		FreeBlock* memBlock = cast(FreeBlock*) what;
		memBlock.h.id = 0;
		
		assert(memBlock.h.slot <= 256 / ALIGNMENT);
		
		memBlock.next = _listHeads[memBlock.h.slot];
		_listHeads[memBlock.h.slot] = memBlock;
	}
	struct FreeBlock {
		Header h;
		union {
			FreeBlock* next;
			void* data;
			}
		
		struct Header {
			byte slot;
			byte id;
		}
	}
}



class AllocatorMedium : Allocator {
	public:
	static immutable MAX_CAPACITY = 32_768;
	static immutable byte ALLOCATOR_ID = cast(byte) 0xBB;
	
	private:
	static Page*	_pageListHead;
	static Page*	_pageListTail;
	
	
	private:
	this() {};	/// Fully static
	
	public:
	override static void* add(size_t amount) {
		uintptr_t sizeNeeded = align_(amount) + align_(FreeBlock.h.sizeof);
		Page* p;
		
		for ( p = _pageListHead; p; p = p.h.next ) {
			if ( p.h.largestFree >= sizeNeeded ) {
				break;
			}
		}
		
		if (!p) {
			p = cast(Page*) GC.malloc(PAGE_SIZE);
			p.h.prev = null;
			p.h.next = _pageListHead;
			if (p.h.next) {
				p.h.next.h.prev = p;
			} else {
				_pageListTail = p;
			}
			_pageListHead = p;
			
			p.h.largestFree = PAGE_SIZE;
			p.h.freeList = p.h.data;
			
			FreeBlock*	fb = cast(FreeBlock*) _pageListHead; //TODO:
			fb.h.page = p;
			fb.h.size = (PAGE_SIZE - Page.sizeof) & ~(ALIGNMENT - 1);
			fb.h.prev =
			fb.h.next =
			fb.h.freePrev =
			fb.h.freeNext = null;
			fb.h.free = true;
		}
		
		void* data = addFromPage( p, sizeNeeded );
		
		if (p.h.largestFree < MAX_CAPACITY) {
			if (p == _pageListTail) {
				_pageListTail = p.h.prev;
			}
			if (p == _pageListHead) {
				_pageListHead = p.h.next;
			}
			if (p.h.prev) {
				p.h.prev.h.next = p.h.next;
			}
			if (p.h.next) {
				p.h.prev.h.prev = p.h.prev;
			}
			
			p.h.prev = null;
			p.h.next = _pageListHead;
			if (p.h.next) {
				p.h.next.h.prev = p;
			}
			_pageListHead = p;
			return data;
		}
		
		if (p != _pageListHead) {
			assert( _pageListHead && _pageListTail && p.h.prev);
			
			_pageListTail.h.next	= _pageListHead;
			_pageListHead.h.prev	= _pageListTail;
			_pageListHead = p.h.prev;
			p.h.prev.h.next	=
			p.h.prev = null;
			_pageListHead = p;
		}
		
		return data;
	}
	
	private:
	static void* addFromPage(Page* page, uintptr_t amount) {
		FreeBlock* best = cast(FreeBlock*) page.h.freeList,
			nw;
		
		assert(best && best.h.size == page.h.largestFree
			&& best.h.size >= amount);
		
		if (best.h.size >= amount + MAX_CAPACITY) {
			nw = best + best.h.size - amount;
			nw.h.page = page;
			nw.h.prev = best;
			nw.h.next = best.h.next;
			nw.h.freePrev =
			nw.h.freeNext = null;
			nw.h.size = amount;
			nw.h.free = false;
			if (best.h.next) {
				best.h.next.h.prev = nw;
			}
			best.h.next = nw;
			best.h.size -= amount;
			
			best.h.free = false;
			nw = best;
			
			page.h.largestFree = 0;
		}
		
		nw.h.id = ALLOCATOR_ID;
		return nw.data;
	}
	
	override static void remove(void* what) {
		FreeBlock* fb = cast(FreeBlock*) what - FreeBlock.data.offsetof;
		fb.h.id = 0;
		Page* p = fb.h.page;
		
		bool inFreeList = p.h.largestFree >=
			align_(256) + align_(FreeBlock.Header.sizeof);
		
		assert(fb.h.size && !fb.h.free);
		
		FreeBlock* prev = fb.h.prev;
		
		if (prev && prev.h.free) {
			prev.h.size += fb.h.size;
			prev.h.next = fb.h.next;
			
			if (fb.h.next) {
				fb.h.next.h.prev = prev;
			}
			fb = prev;
			
		} else {
			
			fb.h.freePrev = null;
			fb.h.freeNext = cast(FreeBlock*) p.h.freeList;
			if (fb.h.freeNext) {
				assert(!fb.h.freeNext.h.freePrev);
				fb.h.freeNext.h.freePrev = fb;
			}
			
			p.h.freeList = fb;
			p.h.largestFree = fb.h.size;
			fb.h.free = true;
		}
		
		FreeBlock* next = fb.h.next;
		if (next && next.h.free) {
			fb.h.size = next.h.size;
			fb.h.next = next.h.next;
			
			if (next.h.next) {
				next.h.next.h.prev = fb;
			}
			if (next.h.freePrev) {
				next.h.freePrev.h.freeNext = next.h.freeNext;
			} else {
				assert(next == p.h.freeList);
				p.h.freeList = next.h.freeNext;
			}
			if (next.h.freeNext) {
				next.h.freeNext.h.freePrev = next.h.freePrev;
			}
		}
		if (p.h.freeList) {
			p.h.largestFree = (cast(FreeBlock*)p.h.freeList).h.size;
		} else {
			p.h.largestFree = 0;
		}
		
		if (fb.h.size > p.h.largestFree) {
			assert(fb != cast(FreeBlock*) p.h.freeList);
			p.h.largestFree = fb.h.size;
			
			if (fb.h.freePrev) {
				fb.h.freePrev.h.freeNext = fb.h.freeNext;
			}
			if (fb.h.freeNext) {
				fb.h.freeNext.h.freePrev = fb.h.freePrev;
			}
			
			fb.h.freeNext = cast(FreeBlock*) p.h.freeList;
			fb.h.freePrev = null;
			
			if (fb.h.freeNext) {
				fb.h.freeNext.h.freePrev = fb;
			}
			p.h.freeList = fb;
		}
		
		if ( !inFreeList ) {
			if (p.h.prev) {
				p.h.prev.h.next = p.h.next;
			}
			if (p.h.next) {
				p.h.next.h.prev = p.h.prev;
			}
			if (p == _pageListHead) {
				_pageListHead = p.h.next;
			}
			
			p.h.next = null;
			p.h.prev = _pageListTail;
			
			if (_pageListTail) {
				_pageListTail.h.next = p;
			}
			_pageListTail = p;
			if (!_pageListHead) {
				_pageListHead = p;
			}
		}
	}
	
	public:
	struct FreeBlock {
		Header h;
		union {
			FreeBlock* next;
			void* data;
			}
		
		struct Header {
			Page*		page;
			uintptr_t		size;
			FreeBlock*	prev;
			FreeBlock*	next;
			FreeBlock*	freePrev;
			FreeBlock*	freeNext;
			bool		free;
			byte[uintptr_t.sizeof - bool.sizeof - byte.sizeof] __pad;
			byte id;
		}
	}
}



class AllocatorLarge : Allocator {
	
	private:
	this() {};	/// Fully static
	
	public:
	override static void* add(size_t amount) {
		
		// TODO: align
		
		return null;
	}
	
	override static void remove(void* what) {
		
	}
}


