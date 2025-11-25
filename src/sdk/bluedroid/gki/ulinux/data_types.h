/******************************************************************************
 *
 *  Copyright (C) 1999-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#ifndef DATA_TYPES_H
#define DATA_TYPES_H

#include "common.h"
// #include <stdint.h>
// #include <stdbool.h>

#ifndef FALSE
#  define FALSE  false
#endif

#ifndef TRUE
#  define TRUE   true
#endif

typedef u8 UINT8;
typedef u16 UINT16;
typedef u32 UINT32;
typedef u64 UINT64;

typedef s8 INT8;
typedef s16 INT16;
typedef s32 INT32;
typedef BOOL BOOLEAN;

typedef UINT32          TIME_STAMP;

#ifdef __arm
#  define PACKED  __packed
#  define INLINE  __inline
#else
#  define PACKED
#  define INLINE
#endif

#define BCM_STRCPY_S(x1,x2,x3)      strcpy((x1),(x3))
#define BCM_STRNCPY_S(x1,x2,x3,x4)  strncpy((x1),(x3),(x4))

#endif
