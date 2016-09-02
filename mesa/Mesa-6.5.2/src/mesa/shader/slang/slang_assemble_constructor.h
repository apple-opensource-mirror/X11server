/*
 * Mesa 3-D graphics library
 * Version:  6.5.2
 *
 * Copyright (C) 2005-2006  Brian Paul   All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SLANG_ASSEMBLE_CONSTRUCTOR_H
#define SLANG_ASSEMBLE_CONSTRUCTOR_H

#if defined __cplusplus
extern "C" {
#endif


extern GLboolean
_slang_is_swizzle(const char *field, GLuint rows, slang_swizzle *swz);

extern GLboolean
_slang_is_swizzle_mask(const slang_swizzle *swz, GLuint rows);

extern GLvoid
_slang_multiply_swizzles(slang_swizzle *, const slang_swizzle *,
                         const slang_swizzle *);

extern GLboolean
_slang_assemble_constructor(slang_assemble_ctx *,
                            const struct slang_operation_ *);

extern GLboolean
_slang_assemble_constructor_from_swizzle(slang_assemble_ctx *,
                                         const slang_swizzle *,
                                         const slang_type_specifier *,
                                         const slang_type_specifier *);

#ifdef __cplusplus
}
#endif

#endif /* SLANG_ASSEMBLE_CONSTRUCTOR_H */