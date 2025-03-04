/*****************************************************************************
Copyright (c) 2020 Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*****************************************************************************/
#pragma once

/**
 * @file
 * @brief DirectML interoperation API
 */

#include "rml/RadeonML.h"

#ifdef __cplusplus
extern "C" {
#endif
/**
 *Set support float16 computation.
 *
 * @param[in] context A valid context handle.
 * @param[in] flag Turn on\off float16 support.
 *
 * @return Status:
 * - #RML_OK if the operation is successful,
 * - #RML_ERROR_BAD_PARAMETER otherwise.
 *
 * To get more details in case of failure, call rmlGetLastError().
 */
RML_API_ENTRY rml_status rmlSetDMLFloat16Allowed(rml_context context, rml_bool flag);

#ifdef __cplusplus
} // extern "C"
#endif
