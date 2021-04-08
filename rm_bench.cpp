#include "benchmark.h"
#include "rabin_miller.hpp"
#include <functional>

static void BM_rabinMiller(benchmark::State& state) {

  for (auto _ : state) {
      int k = 4;
      auto res = isPrime(state.range(0), k);
      state.counters["IS PRIME"] = res; 
  }
  state.SetComplexityN(state.range(0));
}

BENCHMARK(BM_rabinMiller)->DenseRange(1, 25)->Complexity();
BENCHMARK_MAIN();
