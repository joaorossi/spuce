#pragma once
// Copyright (c) 2015 Tony Kirke.  Boost Software License - Version 1.0  (http://www.opensource.org/licenses/BSL-1.0)
#include <spuce/typedefs.h>
namespace spuce {
//! Trait classes for type transformations/conversions
//! \file
//! \brief Determine base class for complex and other custom types (add when needed)
//! \author Tony Kirke
//! \ingroup traits traits
template <typename T> class base_type {
 public:
  typedef T btype;
};
template <typename T> class base_type<std::complex<T> > {
 public:
  typedef T btype;
};
}  // namespace spuce
