/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_COMPILER_DEX_PASS_DRIVER_ME_POST_OPT_H_
#define ART_COMPILER_DEX_PASS_DRIVER_ME_POST_OPT_H_

#include "pass_driver_me.h"

namespace art {

// Forward Declarations.
struct CompilationUnit;
class Pass;
class PassDataHolder;

class PassDriverMEPostOpt : public PassDriverME {
 public:
  explicit PassDriverMEPostOpt(const PassManager* const manager, CompilationUnit* cu)
      : PassDriverME(manager, cu) {
  }

  ~PassDriverMEPostOpt() {
  }

  /**
   * @brief Write and allocate corresponding passes into the pass manager.
   */
  static void SetupPasses(PassManager* pass_manager);
};

}  // namespace art
#endif  // ART_COMPILER_DEX_PASS_DRIVER_ME_POST_OPT_H_
