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

#ifndef PYNINI_GETTERS_H_
#define PYNINI_GETTERS_H_

#include <string>

#include <fst/string.h>
#include "cdrewrite.h"
#include "mergesymbols.h"

namespace fst {
namespace script {

bool GetCDRewriteDirection(const std::string &str, CDRewriteDirection *rd);

bool GetCDRewriteMode(const std::string &str, CDRewriteMode *rm);

bool GetMergeSymbolsType(const std::string &str, MergeSymbolsType *ms);

bool GetStringTokenType(const std::string &str, StringTokenType *ttype);

}  // namespace script
}  // namespace fst

#endif  // PYNINI_GETTERS_H_

