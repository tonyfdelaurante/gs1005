/* Copyright (C) 2001-2023 Artifex Software, Inc.
   All Rights Reserved.

   This software is provided AS-IS with no warranty, either express or
   implied.

   This software is distributed under license and may not be copied,
   modified or distributed except as expressly authorized under the terms
   of the license contained in the file LICENSE in this distribution.

   Refer to licensing information at http://www.artifex.com or contact
   Artifex Software, Inc.,  39 Mesa Street, Suite 108A, San Francisco,
   CA 94129, USA, for further information.
*/


/* Common definitions for "erasepage optimization" device */

#ifndef gdevepo_INCLUDED
#  define gdevepo_INCLUDED

#ifndef gxdevice_INCLUDED
#include "gxdevice.h"
#endif

#define EPO_DEVICENAME "erasepage_optimization"

typedef struct gx_device_s gx_device_epo;

typedef struct {
    subclass_common;
    gx_color_index last_color; /* Pure color only */
    int queued;                /* We have a fillpage queued */
    int disabled;              /* Set once we have done our job */
} erasepage_subclass_data;

/* Check if epo subclass device installed, and install it if not */
int epo_check_and_install(gx_device *dev);
void gx_epo_finalize(const gs_memory_t *cmem, void *vptr);

#endif /* gdevepo_INCLUDED */
