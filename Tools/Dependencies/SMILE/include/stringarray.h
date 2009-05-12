#ifndef STRINGARRAY_H
#define STRINGARRAY_H

// {{SMILE_PUBLIC_HEADER}}

#ifndef DSLARRAY_H
#include "dslarray.h"
#endif

class DSL_intArray;

class DSL_stringArray : public DSL_array
{
 protected:
  char **items;

 public:
  DSL_stringArray(void);
  DSL_stringArray(int initialSize, int initialDelta=10);
  DSL_stringArray(const DSL_stringArray &likeThisOne);
 ~DSL_stringArray() {CleanUp();};
  int operator=(const DSL_stringArray &likeThisOne);
  char *operator[](int index) { return items[index]; } // no checking !!!
  char *Subscript(int index);
  const char * operator[](int index) const { return items[index]; } // no checking !!!
  const char * Subscript(int index) const;
  virtual int SetString(int thisPosition, const char *thisString);
  virtual int Add(const char *thisSring);
  virtual int Insert(int here, const char *thisString);
  int    Delete(int index);
  int    DeleteByContent(char *thisContent);
  int    FindPosition(const char *ofThisString) const;
  int    IsInList(const char *thisString) const;
  void   Flush(void);
  int    RoomGuaranteed(int forThisPeople);
  int    SetSize(int thisSize);
  char **Items(void) {return(items);};
  int    FillFrom(DSL_stringArray &thisOne);
  int    ChangeOrder(DSL_intArray &newPos);
  void   CheckReadiness(int deep = 0);
  void   CleanUp(int deep = 0);

 protected:
  int Grow(void);
  void DeleteString(int atThisPosition);
  void ChangeString(int atThisPosition, const char *newString);
};


#endif
