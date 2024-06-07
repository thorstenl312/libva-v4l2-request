/*
 * Copyright (C) 2007 Intel Corporation
 * Copyright (C) 2016 Florent Revest <florent.revest@free-electrons.com>
 * Copyright (C) 2018 Paul Kocialkowski <paul.kocialkowski@bootlin.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "mpeg2.h"
#include "context.h"
#include "request.h"
#include "surface.h"

#include <assert.h>
#include <string.h>

#include <sys/ioctl.h>
#include <sys/mman.h>

#include <linux/videodev2.h>
#include <hevc-ctrls.h>

#include "v4l2.h"

#define H265_NAL_UNIT_TYPE_SHIFT		1
#define H265_NAL_UNIT_TYPE_MASK			((1 << 6) - 1)
#define H265_NUH_TEMPORAL_ID_PLUS1_SHIFT	0
#define H265_NUH_TEMPORAL_ID_PLUS1_MASK		((1 << 3) - 1)

static void h265_fill_pps(VAPictureParameterBufferHEVC *picture,
			  VASliceParameterBufferHEVC *slice,
			  struct v4l2_ctrl_hevc_pps *pps)
{
	
}

static void h265_fill_sps(VAPictureParameterBufferHEVC *picture,
			  struct v4l2_ctrl_hevc_sps *sps)
{
	
}

static void h265_fill_slice_params(VAPictureParameterBufferHEVC *picture,
				   VASliceParameterBufferHEVC *slice,
				   struct object_heap *surface_heap,
				   void *source_data,
				   struct v4l2_ctrl_hevc_slice_params *slice_params)
{
	
}

int h265_set_controls(struct request_data *driver_data,
		      struct object_context *context_object,
		      struct object_surface *surface_object)
{
	return 0;
}
