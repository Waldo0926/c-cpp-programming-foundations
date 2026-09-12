# Building the repository

This repository has no third-party runtime dependencies. A C11 compiler, a C++17 compiler, and CMake 3.16+ are sufficient.

## macOS / Linux

```bash
cmake -S . -B build
cmake --build build -j
```

To build only one target, for example the optimized CCF CSP 202112-2 solution:

```bash
cmake --build build --target ccf_202112_2_optimized
```

## Run an example

After building, executables are placed under the CMake build directory. For example:

```bash
./build/ccf_202112_2_optimized
```

Exact executable paths can differ slightly between generators and operating systems.
