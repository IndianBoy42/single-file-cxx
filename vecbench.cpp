#include <benchmark/benchmark.h>

// Here till BENCHMARK() is the basic unit of a benchmark
static void ExampleBenchmark(benchmark::State& state) {
	for (auto _ : state) {
		// Replace this loop
		benchmark::DoNotOptimize(std::vector<std::string>(2));
	}
}
// Register the function as a benchmark
BENCHMARK(ExampleBenchmark);
static void Bench2(benchmark::State& state) {
	for (auto _ : state) {
		// Replace this loop
		std::vector<std::string>(2);
	}
}
// Register the function as a benchmark
BENCHMARK(Bench2);

BENCHMARK_MAIN();