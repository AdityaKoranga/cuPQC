// Copyright (c) 2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
// NVIDIA CORPORATION and its licensors retain all intellectual property
// and proprietary rights in and to this software, related documentation
// and any modifications thereto.  Any use, reproduction, disclosure or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA CORPORATION is strictly prohibited.

#ifndef COMMONDX_DETAIL_STL_TUPLE_HPP
#define COMMONDX_DETAIL_STL_TUPLE_HPP

#include "../config.hpp"

#ifdef COMMONDX_DETAIL_USE_CUDA_STL
#    include <cuda/std/tuple>
#else
#    include <tuple>
#endif

#endif // COMMONDX_DETAIL_STL_TUPLE_HPP
