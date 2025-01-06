///
/// HybridMathSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif





namespace margelo::nitro::rnmath {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `Math`
   * Inherit this class to create instances of `HybridMathSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridMath: public HybridMathSpec {
   * public:
   *   HybridMath(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridMathSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridMathSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridMathSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual double add(double a, double b) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "Math";
  };

} // namespace margelo::nitro::rnmath
