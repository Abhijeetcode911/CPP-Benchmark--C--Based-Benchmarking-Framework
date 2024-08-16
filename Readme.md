# CPP Benchmark - C++ Based Benchmarking Framework

This project provides a C++ based benchmarking framework utilizing metaprogramming and variadic templates to test the performance of various C++ functions. It includes a Django-based UI for user interaction and Docker for easy deployment and isolation during benchmark execution.

## Features

- **Metaprogramming Utilization**: Leverage metaprogramming and variadic templates to support diverse function signatures.
- **Chrono Timing**: Employ `std::chrono` for precise execution time measurements.
- **Lambda Functions**: Use lambda functions and `std::bind` to execute benchmarks dynamically.
- **Django UI**: A simple web interface to define and execute benchmarks.
- **Docker Integration**: Containerized application for isolated and consistent runtime environments.

## Getting Started

### Prerequisites

Ensure you have the following installed:
- Docker
- C++ compiler (g++ or similar)
- Python 3
- Django (can be installed via pip)

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/cpp-benchmark-framework.git
   cd cpp-benchmark-framework
