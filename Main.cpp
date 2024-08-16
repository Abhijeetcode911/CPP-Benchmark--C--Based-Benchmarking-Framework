#include "Benchmark.h"
#include <iostream>

void sampleFunction(int a, double b) {
    std::cout << "Function runs with " << a << " and " << b << std::endl;
}

int main() {
    Benchmark<int, double> benchmark(sampleFunction);
    benchmark.run(5, 3.14);
    benchmark.displayResults();
    return 0;
}
