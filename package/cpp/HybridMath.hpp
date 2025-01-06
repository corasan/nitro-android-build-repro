#pragma once

#include "HybridMathSpec.hpp"

namespace margelo::nitro::rnmath {  
  class HybridMath : public HybridMathSpec {
    public:
      HybridMath(): HybridObject(TAG) {}
      
    public:
      double add(double a, double b) override;
  };
}; // namespace margelo::nitro::rnmath
