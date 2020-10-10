/* * prolouge ************************************************************************************/
#ifndef _STD_TYPES_H_
#define _STD_TYPES_H_

#include <stdint.h>

/* * defines *************************************************************************************/
#define TRUE                1UL
#define FALSE               0UL
#define NULL_PTR            (void*)0

/* * type definitions ****************************************************************************/
typedef char                 sint8;
typedef unsigned char        uint8;
typedef short                sint16;
typedef unsigned short       uint16;
typedef long                 sint32;
typedef unsigned long        uint32;
typedef long long            sint64;
typedef unsigned long long   uint64;
typedef uint32               boolean;

#endif /* #ifndef _STD_TYPES_H_ */
