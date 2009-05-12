#ifndef GENERAL_H
#define GENERAL_H

// {{SMILE_PUBLIC_HEADER}}

//#pragma warning( disable : 4100)  // Disable "unreference formal parameter" warning
//#pragma warning( disable : 4514)  // Disable "unreferenced inline function has been removed" warning

/* =======================================================================
 *  Useful general definitions.
 * =======================================================================
 */


#include <string>
#include <cstdio>

#include "constants.h"
#include "errors.h"

#ifndef MAC
typedef int Boolean;
#endif

#define DSL_FALSE             0
#define DSL_TRUE              1

/* Error codes */

typedef int Error;

// some constants
#define DSL_FILE_LINE_LENGTH (1021)
#define DSL_FILE_TOKEN_LENGTH (10*DSL_FILE_LINE_LENGTH)


static int DSL_NUMBER_PRECISSION = 8;  // number of digits after decimal point

#define DSL_NUMBER_TRUNCATE "%.8f"
#define DSL_NUMBER_COMPACT "%.8f"
#define DSL_NUMBER_COMPACT_USER "%.8g"


#if defined(_WIN32)
	#define DSL_stricmp _stricmp
	#define DSL_strnicmp _strnicmp
#else
	#define DSL_stricmp strcasecmp
	#define DSL_strnicmp strncasecmp
	#define _isnan isnan
#endif


#ifdef WINCE
void* bsearch(const void *, const void *, size_t, size_t, int (__cdecl *) (const void *, const void *));
#endif

#define DSL_EPSILON    0.000005 

// Global Functions
int StringToDouble(char *theString, double &here);
int DoubleToString(double theNumber, char *here, int precission = DSL_NUMBER_PRECISSION);
int DoubleToStringUser(double theNumber, char *here, int precission = DSL_NUMBER_PRECISSION);
int IntToString(int theNumber, char *here);
int StringToInt(char *theString, int &here);

// this only works for probabilities! (0.0 <= thisOne <= 1.0)
double RoundProbability(double thisOne, int significantDigits);

#endif // GENERAL_H
