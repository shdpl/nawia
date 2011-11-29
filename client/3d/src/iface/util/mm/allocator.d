module util.mm.freelist;

private import core.memory;

/**
	Entirely static allocator based on FreeLists.

	Use only for heavily instanced classes since every injecting class
	will add up to Allocator.PAGE_SIZE bytes to Your memory usage.
	TODO: consider GC-less memory management
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
	
	struct Page {
		Header header;
		byte[PAGE_SIZE-Header.sizeof] data;
		struct Header {
			void*		data;
			uint		size;
			Page*		next;
			Page*		prev;
			uint		largestFree;
			void*		freeList;
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
	static E align_(E)(E address) {
		return cast(E)((address) + ALIGNMENT - 1) & ~(ALIGNMENT - 1);
	}
	
	override static void* add(size_t amount) {
		static if ((void*).sizeof < ALIGNMENT)
			if (amount < (void*).sizeof) {
				amount = (void*).sizeof;
			}
		
		amount = align_(amount);
		
		FreeBlock* freeBlock = _listHeads[amount / ALIGNMENT];
		if (is(freeBlock)) {
			freeBlock.header.id = ALLOCATOR_ID;
	    _listHeads[amount / ALIGNMENT] = freeBlock.next;
	    return freeBlock.next;
		}
		
		uint freeLeft = cast(uint)PAGE_SIZE - _curPageOffset;
	  if (amount >= freeLeft) {
	    _curPage.header.next = _curPage;
	    _curPage = cast(Page*) GC.malloc(PAGE_SIZE);
	  }
	  _curPageOffset = cast(ushort)align_(0);
	  
	  freeBlock = cast(FreeBlock*) _curPage.data + _curPageOffset;
	  freeBlock.header.slot = cast(ubyte) amount/ALIGNMENT;
	  freeBlock.header.id = ALLOCATOR_ID;
	  _curPageOffset += amount + FreeBlock.Header.sizeof;
	  
	  return freeBlock.data;
	}
	
	override static void remove(void* what) {
		FreeBlock* memBlock = cast(FreeBlock*) what;
		memBlock.header.id = 0;
		
		assert(memBlock.header.slot <= 256 / ALIGNMENT);
		
		memBlock.next = _listHeads[memBlock.header.slot];
		_listHeads[memBlock.header.slot] = memBlock;
	}
	struct FreeBlock {
		Header header;
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
	static immutable MAX_CAPACITY = 2 ^^ short.sizeof;
	
	
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


