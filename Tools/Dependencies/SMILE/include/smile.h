#ifndef SMILE_H
#define SMILE_H

// {{SMILE_PUBLIC_HEADER}}

// client-side SMILE header
// DO NOT USE for internal SMILE development

#ifdef _WIN32
    #if (_MSC_VER >= 1400) && defined(NDEBUG) && (!defined(_SECURE_SCL) || _SECURE_SCL != 0)    
        #error In release build _SECURE_SCL must be defined and set to zero for VS.NET 2005 or later
    #endif

    #ifndef SMILE_VC_NO_AUTOLINK
        // automatically link with SMILE library
        #ifdef NDEBUG
            #ifdef _DLL
                #pragma comment(lib, "smile_dyn")
            #else
                #pragma comment(lib, "smile")
            #endif 
        #else
            #pragma comment(lib, "smile_dbg")
        #endif
    #endif
#endif

// basic data structures
#include "intarray.h"
#include "doublearray.h"
#include "dmatrix.h"
#include "syscoord.h"
#include "generalclases.h"

// network structure
#include "network.h"
#include "node.h"
#include "submodel.h"
#include "simplecase.h"
#include "errorstrings.h"

// supported node definition classes
#include "defcpt.h"
#include "deftruthtable.h"
#include "defnoisymax.h"
#include "defnoisyadder.h"
#include "deflist.h"
#include "deftable.h"
#include "defmau.h"
#include "defdemorgan.h"

// supported node value classes
#include "valbeliefvector.h"
#include "vallistofdecisions.h"
#include "valexpectedutility.h"
#include "valmauexpectedutility.h"

// voi
#include "valueofinfo.h"

// define SMILE_NO_DIAGNOSIS before including smile.h
// to skip diag-related functionality
#ifndef SMILE_NO_DIAGNOSIS
#include "diag_network.h"
#include "nodecost.h"
#include "extradefinition.h"
#include "caselibrary.h"
#endif // !SMILE_NO_DIAGNOSIS

#endif
