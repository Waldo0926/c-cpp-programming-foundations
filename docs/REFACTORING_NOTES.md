# Refactoring notes

The goal of this cleanup was to preserve the learning history while making the repository readable as a modern public portfolio.

## Changes made

1. **Curated the archive** — removed binaries, IDE caches, duplicate files, unrelated documents, and third-party work.
2. **Normalized source encoding** — historical CCF source files were converted to UTF-8.
3. **Refactored fundamentals** — representative exercises were renamed and corrected so they compile cleanly as C11 programs.
4. **Preserved CCF history** — the original algorithms are retained where the archived source was available.
5. **Recovered CCF 202112-1 and 202112-2** — the two archived files were identical and matched the report’s 202112-2 approach, so both historical sources were reconstructed from the original course report.
6. **Added an optimized 202112-2** — interval aggregation replaces the original O(N) point-by-point scan.
7. **Added reproducible builds** — CMake builds the full curated collection, and GitHub Actions verifies it on Ubuntu.

## What this repository is not

This is not presented as a production application. It is a curated record of early programming coursework and problem-solving practice, modernized so the code can be built and reviewed today.
