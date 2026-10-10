# C/C++ Programming Foundations

[![Type](https://img.shields.io/badge/Type-Coursework-2563eb?style=for-the-badge)](#)
[![Tech](https://img.shields.io/badge/Tech-C_%2F_C%2B%2B-7c3aed?style=for-the-badge)](#)


**English** · [中文](README.zh-CN.md)

A curated collection of undergraduate **C/C++ programming exercises, debugging practice, and CCF CSP solutions**, reconstructed from coursework completed in 2021 and cleaned up for long-term public reference.

This repository is intentionally selective: it preserves useful code and learning evidence while excluding compiled binaries, IDE caches, unrelated documents, third-party submissions, and materials that should not be redistributed.

## Highlights

- **20 recorded CCF CSP tasks, 1970/2000 in total** in the original course-design report.
- **19 CCF CSP tasks recorded at 100/100** and one 70/100 performance-limited task (`202112-2`).
- A reconstructed historical `202112-2` implementation plus an **optimized interval-based version**.
- Refactored C11 exercises covering control flow, functions, arrays, strings, structs, pointers, linked lists, and file I/O.
- Reproducible CMake build and GitHub Actions build verification.

## Repository structure

```text
.
├── fundamentals/              # Refactored C11 coursework exercises
│   ├── 01-basics/
│   ├── 02-control-flow/
│   ├── 03-loops/
│   ├── 04-functions/
│   ├── 05-arrays-and-strings/
│   ├── 06-structs/
│   ├── 07-pointers/
│   ├── 08-file-io/
│   └── 09-integrated-exercises/
├── ccf-csp/                   # Historical CCF CSP solutions and score record
├── docs/                      # Course context and cleanup notes
├── scripts/                   # Local build/check helpers
├── CMakeLists.txt
└── BUILDING.md
```

## CCF CSP result snapshot

| Result | Count |
| --- | ---: |
| 100/100 | 19 |
| 70/100 | 1 |
| **Total** | **1970/2000** |

See [`ccf-csp/README.md`](ccf-csp/README.md) for the full ID-by-ID record.

### Why `202112-2` has two versions

The original course report records `202112-2` as **70/100**, with the implementation scanning the entire range and therefore suffering from a performance bottleneck. The archived `202112-1.cpp` and `202112-2.cpp` files were later found to be identical, with their shared content matching the report’s 202112-2 approach. The correct 202112-1 source was therefore also reconstructed from the report.

For transparency, this repository contains:

- [`202112-2_historical_70.cpp`](ccf-csp/2021/202112-2_historical_70.cpp): reconstructed from the code printed in the original report;
- [`202112-2_optimized.cpp`](ccf-csp/2021/202112-2_optimized.cpp): a later interval-based optimization.

This makes the performance issue and the subsequent improvement visible rather than rewriting the historical record.

## Topics covered

**C fundamentals:** I/O, arithmetic, branches, loops, functions, arrays, strings, structures, pointers, dynamic memory, linked lists, and file operations.

**Problem solving:** simulation, array processing, coordinate/data aggregation, sorting, condition handling, and performance-oriented refactoring through CCF CSP practice.

## Build

Requirements:

- CMake 3.16+
- a C11 compiler (GCC or Clang)
- a C++17 compiler (G++ or Clang++)

```bash
cmake -S . -B build
cmake --build build -j
```

There are **no third-party runtime dependencies**. See [`BUILDING.md`](BUILDING.md) for details.

## Repository provenance

This repository was reorganized from a much larger historical course archive. The public version deliberately excludes raw reports containing unnecessary personal information, other students' work, generated Visual Studio files, executables/debug artifacts, and documents with redistribution restrictions.

For a detailed record of the cleanup, see [`docs/REFACTORING_NOTES.md`](docs/REFACTORING_NOTES.md).

## Portfolio note

This repository is best read as a **programming-foundations and learning-history project**, not as a production system. Its main value is showing early C/C++ fundamentals, algorithmic practice, and the ability to revisit historical code critically and improve it.
