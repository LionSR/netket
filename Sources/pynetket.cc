// Copyright 2018 The Simons Foundation, Inc. - All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NETKET_PYNETKET_CC
#define NETKET_PYNETKET_CC

#include <netket.hpp>
#include "Graph/py_graph.hpp"
// #include "Supervised/py_supervised.hpp"
#include "Utils/py_utils.hpp"
#include "Utils/pybind_helpers.hpp"

namespace netket {

PYBIND11_MODULE(_C_netket, m) {
  AddGraphModule(m);
  AddUtilsModule(m);
  // AddSupervisedModule(m);
}  // PYBIND11_MODULE

}  // namespace netket

#endif
