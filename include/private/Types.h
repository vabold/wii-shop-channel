#ifndef PRIVATE_TYPES_H
#define PRIVATE_TYPES_H

#ifndef COMMON_H
// We expect Common.h to already be declared
#error "Do not include this file directly! Include Common.h instead!"
#endif

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;

typedef float f32;
typedef float f64;

typedef u32 size_t;
typedef u32 uintptr_t;
typedef s32 intptr_t;

typedef int BOOL;
enum
{
    FALSE,
    TRUE
};

#ifdef __cplusplus
#ifdef __CWCC__
#define STATIC_ASSERT( cond ) __static_assert( cond, #cond )
#define SIZE_ASSERT( obj, size ) STATIC_ASSERT( sizeof( obj ) == size )
#else
#define STATIC_ASSERT( cond )
#define SIZE_ASSERT( obj, size )
#endif
#endif

#endif
