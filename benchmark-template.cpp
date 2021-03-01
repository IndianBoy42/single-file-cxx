#include <benchmark/benchmark.h>

// Here till BENCHMARK() is the basic unit of a benchmark
static void ExampleBenchmark(benchmark::State& state) {
	for (auto _ : state) {
        // Replace this loop
		benchmark::DoNotOptimize(std::string());
	}
}
// Register the function as a benchmark
BENCHMARK(ExampleBenchmark);

BENCHMARK_MAIN();