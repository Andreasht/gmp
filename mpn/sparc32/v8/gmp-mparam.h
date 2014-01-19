/* SPARC v8 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999-2004 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published
by the Free Software Foundation; either version 3 of the License, or (at
your option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see https://www.gnu.org/licenses/.  */


#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* Generated by tuneup.c, 2004-02-07, gcc 2.95 */

#define MUL_TOOM22_THRESHOLD             10
#define MUL_TOOM33_THRESHOLD             65

#define SQR_BASECASE_THRESHOLD            4
#define SQR_TOOM2_THRESHOLD              18
#define SQR_TOOM3_THRESHOLD              65

#define DIV_SB_PREINV_THRESHOLD           5
#define DIV_DC_THRESHOLD                 24
#define POWM_THRESHOLD                   38

#define HGCD_THRESHOLD                   69
#define GCD_ACCEL_THRESHOLD               3
#define GCD_DC_THRESHOLD                498
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           6
#define DIVREM_1_UNNORM_THRESHOLD        11
#define MOD_1_NORM_THRESHOLD              5
#define MOD_1_UNNORM_THRESHOLD            9
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          4

#define GET_STR_DC_THRESHOLD             14
#define GET_STR_PRECOMPUTE_THRESHOLD     23
#define SET_STR_THRESHOLD              1679

#define MUL_FFT_TABLE  { 272, 672, 1152, 2560, 10240, 24576, 0 }
#define MUL_FFT_MODF_THRESHOLD          264
#define MUL_FFT_THRESHOLD              1792

#define SQR_FFT_TABLE  { 304, 672, 1152, 3584, 10240, 24576, 0 }
#define SQR_FFT_MODF_THRESHOLD          264
#define SQR_FFT_THRESHOLD              1728
