#ifndef RECTANGLEARRAY_H
#define RECTANGLEARRAY_H

// {{SMILE_PUBLIC_HEADER}}

#ifndef DSLARRAY_H
#include "dslarray.h"
#endif

//////////////////////////////////////////////////////////////////////////////
// class DSL_rectangle
//////////////////////////////////////////////////////////////////////////////

class DSL_rectangle : public DSL_object
{
 public: // no control, so make them public
  int center_X;
  int center_Y;
  int width; 
  int height;

 public:
  DSL_rectangle(void);
  DSL_rectangle(const DSL_rectangle &likeThisOne);
  int operator =(const DSL_rectangle &likeThisOne);
  int IsInside(int X, int Y);
  int FillDefaultValues(DSL_rectangle &fromHere);
  void Set(int cX, int cY, int W, int H) {center_X = cX; center_Y = cY, width = W; height = H;};
}; 


//////////////////////////////////////////////////////////////////////////////
// and the array
//////////////////////////////////////////////////////////////////////////////

class DSL_rectangleArray : public DSL_array
{
 protected:
  DSL_rectangle *items;
  DSL_rectangle  dummyItem;

 public:
  DSL_rectangleArray(void);
  DSL_rectangleArray(int initialSize, int initialDelta=10);
  DSL_rectangleArray(DSL_rectangleArray &likeThisOne);
 ~DSL_rectangleArray() {CleanUp();};
  int  operator=(DSL_rectangleArray &likeThisOne);
  DSL_rectangle &operator[](int index) { return Subscript(index); }
  DSL_rectangle &Subscript(int index);
  int  Add(DSL_rectangle &thisRectangle);
  int  Insert(int here, DSL_rectangle &thisRectangle); 
  int  Delete(int index);
  int  RoomGuaranteed(int forThisPeople);
  int  SetSize(int thisSize);
  DSL_rectangle *Items(void) {return(items);};
  void Flush(void);
  int FillFrom(DSL_rectangleArray &thisOne);

  void CheckReadiness(int deep = 0);
  void CleanUp(int deep = 0);

 protected:
  int  Grow(void);
};

#endif
