#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <chrono>
#include <functional>
#include <vector>

template<typename... Args>
class Benchmark {
public:
    using ClockType = std::chrono::high_resolution_clock;
    using TimePointType = std::chrono::time_point<ClockType>;
    using FunctionType = std::function<void(Args...)>;

private:
    FunctionType function;
    std::vector<std::chrono::nanoseconds> results;

public:
    Benchmark(FunctionType func) : function(func) {}

    void run(Args... args) {
        TimePointType start = ClockType::now();
        function(args...);
        TimePointType end = ClockType::now();
        results.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start));
    }

    void displayResults() {
        for (auto& time : results) {
            std::cout << "Execution time: " << time.count() << " nanoseconds\n";
        }
    }
};

#endif // BENCHMARK_H
