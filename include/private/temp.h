/* ================================================================ *
 *  This file is for declaring various C/C++ function signatures temporarily.
 *  This allows for decompiling without relying on any MSL decompilation existing first.
 * ================================================================ */

#ifndef PRIVATE_TEMP_H
#define PRIVATE_TEMP_H

#ifndef COMMON_H
// We expect Common.h to already be declared
#error "Do not include this file directly! Include Common.h instead!"
#endif

#include <private/Types.h>

#ifndef NULL
#define NULL 0
#endif

#ifdef __cplusplus
extern "C"
{
#endif

// string.h
void *memset( void *, int, size_t );
void *memcpy( void *, const void *, size_t );
char *strncpy( char *, const char *, size_t );

#ifdef __cplusplus
}
#endif

#endif
