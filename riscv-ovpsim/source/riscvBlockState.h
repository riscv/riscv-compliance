/*
 * Copyright (c) 2005-2019 Imperas Software Ltd., www.imperas.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied.
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

// model header files
#include "riscvTypes.h"
#include "riscvTypeRefs.h"

//
// This structure holds state for a code block as it is morphed
//
typedef struct riscvBlockStateS {

    riscvBlockStateP prevState;     // previous block state
    Uns32            fpNaNBoxMask;  // mask of known single-precision FP registers
    Bool             fpInstDone;    // floating-point instruction already seen?
    riscvRMDesc      fpActiveRMMT;  // active floating-point rounding mode

} riscvBlockState;

