#ifndef DSLARRAY_H
#define DSLARRAY_H

// {{SMILE_PUBLIC_HEADER}}

#include "dslobject.h"

class DSL_array : public DSL_object
{
 protected:
  int  size;       // size of the array
  int  numitems;   // number of items in the array
  int  delta;      // reallocation size-increment constant

 public:
  DSL_array(int initialDelta = 10);
 ~DSL_array() {CleanUp();};
  int GetSize(void) const {return(size);};
  int NumItems(void) const {return(numitems);};
  void UseAsList(int nItems = -1) {if (Ok(nItems)) numitems = nItems; else numitems = size;};
  void CleanUp(int deep = 0);

 protected:
  int Ok(int index) const {return(index>=0 && index<size);};
  int Full(void) {return(size == numitems);};
};

#endif
