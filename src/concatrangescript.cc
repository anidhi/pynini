// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Copyright 2017 and onwards Google, Inc.
//
// For general information on the Pynini grammar compilation library, see
// pynini.opengrm.org.

#include "concatrangescript.h"

#include <fst/script/script-impl.h>

namespace fst {
namespace script {

void ConcatRange(MutableFstClass *fst, int32 lower, int32 upper) {
  ConcatRangeArgs args(fst, lower, upper);
  Apply<Operation<ConcatRangeArgs>>("ConcatRange", fst->ArcType(), &args);
}

REGISTER_FST_OPERATION(ConcatRange, StdArc, ConcatRangeArgs);
REGISTER_FST_OPERATION(ConcatRange, LogArc, ConcatRangeArgs);
REGISTER_FST_OPERATION(ConcatRange, Log64Arc, ConcatRangeArgs);

}  // namespace script
}  // namespace fst
