#ifndef SMILE_GENERALCLASES_H
#define SMILE_GENERALCLASES_H

// {{SMILE_PUBLIC_HEADER}}

#include "stringarray.h"
#include "idarray.h"
#include "rectanglearray.h"

class DSL_node;

//////////////////////////////////////////////////////////////////////////////
// class DSL_header
//////////////////////////////////////////////////////////////////////////////

class DSL_header : public DSL_object
{
public:
	DSL_header();
	DSL_header(DSL_header &likeThisOne);
	~DSL_header();
	int operator =(const DSL_header &likeThisOne);
	void CleanUp(int deep = 0);
	int SetId(const char *theID);
	int SetName(const char *theName);
	int SetComment(const char *theComment);
	const char *GetId() const { return id; }
	const char *GetName() const { return name; }
	const char *GetComment() const { return comment; }
	static int IsThisIdValid(const char *theID);
	static int MakeValidId(char *theID);
	void CheckConsistency(int deep = 1);
	void AssociateWithNode(DSL_node *n);
private:
	char *id;       // For quick reference (including formulae), no spaces.
	char *name;     // Longer name for display and printing, spaces allowed.
	char *comment;  // A possibly longer text
	DSL_node *node; // node associated with this header (may be NULL for network/submodel headers)
};

//////////////////////////////////////////////////////////////////////////////
// class DSL_screenInfo
//////////////////////////////////////////////////////////////////////////////

// DSL_screenInfo flags 
#define DSL_SHOW_IN_ARCS   1  // Set if incoming arcs should be displayed.
#define DSL_SHOW_OUT_ARCS  2  // Set if outgoing arcs should be displayed.
#define DSL_SELECTED       4  // Set if node is selected (graphically)

#define DSL_DEFAULT_SCREENINFO_FLAGS (DSL_SHOW_IN_ARCS | DSL_SHOW_OUT_ARCS)

class DSL_screenInfo : public DSL_object
{
 public:
  DSL_rectangle position; // center, width and height
  int color;              // default color
  int selColor;           // color when selected.
  int font;               // Font used to display info
  int fontColor;
  int borderThickness;
  int borderColor;

 protected:
  int flags;

 public:
  DSL_screenInfo(void);
  DSL_screenInfo(const DSL_screenInfo &likeThisOne);
  int operator =(const DSL_screenInfo &likeThisOne);
  int ShowInArcs(void)      {return(flags & DSL_SHOW_IN_ARCS);};
  int ShowOutArcs(void)     {return(flags & DSL_SHOW_OUT_ARCS);};  
  int IsSelected(void)      {return(flags & DSL_SELECTED);};  
  void SetShowInArcs(void)  {flags |= DSL_SHOW_IN_ARCS;};
  void SetHideInArcs(void)  {flags &= ~DSL_SHOW_IN_ARCS;};
  void SetShowOutArcs(void) {flags |= DSL_SHOW_OUT_ARCS;};  
  void SetHideOutArcs(void) {flags &= ~DSL_SHOW_OUT_ARCS;};  
  void SetSelected(void)    {flags |= DSL_SELECTED;};  
  void SetUnselected(void)  {flags &= ~DSL_SELECTED;};  
  int FillDefaultValues(DSL_screenInfo &fromHere);
};

//////////////////////////////////////////////////////////////////////////////
// class DSL_creation
//////////////////////////////////////////////////////////////////////////////

class DSL_creation : public DSL_object
{
 protected:
  char *creator;   // Name of the creator
  char *created;   // Creation date.
  char *modified;  // Last modification date.

 public:  
  DSL_creation(void);
  DSL_creation(const DSL_creation &likeThisOne);
 ~DSL_creation();
  int operator =(const DSL_creation &likeThisOne);
  void CleanUp(int deep = 0);
  int SetCreator(const char *theCreator);
  int SetCreated(const char *thisDate);
  int SetModified(const char *thisDate);
  char *GetCreator(void) const {return(creator);};
  char *GetCreated(void) const {return(created);};
  char *GetModified(void) const {return(modified);};
};

//////////////////////////////////////////////////////////////////////////////
// class DSL_textBox
//////////////////////////////////////////////////////////////////////////////

class DSL_textBoxList : public DSL_object
{
 // this class implements a list of comments on the screen.
 // For each comment we have a rectangle with its position
 // and dimensions and a string with the comment itself
 protected:
  DSL_rectangleArray  positions;
  DSL_stringArray     strings;

 public:  
  DSL_textBoxList(void);
 
  DSL_rectangleArray  &GetPositions(void) {return(positions);};
  DSL_stringArray     &GetStrings(void)   {return(strings);};

  char          *GetString(int thisOne)   {return(strings.Subscript(thisOne));};
  DSL_rectangle &GetPosition(int thisOne) {return(positions.Subscript(thisOne));};

  int NumItems(void) {return(strings.NumItems());};
  int operator =(DSL_textBoxList &likeThisOne);
};

//////////////////////////////////////////////////////////////////////////////
// class DSL_userProperties
//////////////////////////////////////////////////////////////////////////////

class DSL_userProperties : public DSL_object
{
 private:
  // NOTE: a user property is a pair ([id],[string])
  DSL_idArray names;
  DSL_stringArray values;

 public:
  DSL_userProperties(void);
  DSL_userProperties(const DSL_userProperties &likeThisOne);
 ~DSL_userProperties();
  int operator =(const DSL_userProperties &likeThisOne);
  void CleanUp(int deep = 0);

  int AddProperty(const char *propertyName, const char *propertyValue);
  int InsertProperty(int here, const char *propertyName, const char *propertyValue);
  char *GetPropertyName(int index) {return(names[index]);}; // no checking !!!
  char *GetPropertyValue(int index) {return(values[index]);}; // no checking !!!
  int ChangePropertyName(int thisOne, const char *thisName);
  int ChangePropertyValue(int thisOne, const char *thisValue);

  int FindProperty(const char *withThisName);
  int DeleteProperty(int thisOne);
  int DeleteAllProperties(void);
  int GetNumberOfProperties(void);

  void CheckConsistency(int deep = 1);
};

//////////////////////////////////////////////////////////////////////////////
// class DSL_nodeDocumentation
//////////////////////////////////////////////////////////////////////////////

class DSL_documentation : public DSL_object
{
 // this class represents the documentation part on another
 // component like, for example, a state of a node.
 private:
  // NOTE: a document is a pair ([title],[path])
  DSL_stringArray titles;
  DSL_stringArray paths;

 public:
  DSL_documentation(void);
  DSL_documentation(const DSL_documentation &likeThisOne);
 ~DSL_documentation();
  int operator =(const DSL_documentation &likeThisOne);
  void CleanUp(int deep = 0);

  int AddDocument(char *title, char *path);
  int InsertDocument(int here, char *title, char *path);
  char *GetDocumentTitle(int index) {return(titles[index]);}; // no checking !!!
  char *GetDocumentPath(int index) {return(paths[index]);}; // no checking !!!
  int ChangeDocumentTitle(int thisOne, char *newTitle);
  int ChangeDocumentPath(int thisOne, char *newPath);

  int FindDocument(char *withThisTitle);
  int DeleteDocument(int thisOne);
  int DeleteAllDocuments(void);
  int GetNumberOfDocuments(void);

  void CheckConsistency(int deep = 1);
};


#endif
