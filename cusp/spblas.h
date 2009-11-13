/*
 *  Copyright 2008-2009 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#pragma once

#include <cusp/detail/config.h>

namespace cusp
{
namespace spblas
{

template <typename MatrixType,
          typename VectorType1,
          typename VectorType2>
void spmv(const MatrixType& A,
          const VectorType1& x,
                VectorType2& y);

} // end namespace spblas
} // end namespace cusp

#include <cusp/detail/spblas.inl>
