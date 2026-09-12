# CCF CSP practice

This directory contains the 20 CCF CSP tasks recorded in the original 2021 course-design report.

| Problem ID | Recorded score | Source |
| --- | ---: | --- |
| 202112-1 | 100/100 | [202112-1.cpp](2021/202112-1.cpp) |
| 202112-2 | 70/100 | [optimized](2021/202112-2_optimized.cpp) · [historical 70-point version](2021/202112-2_historical_70.cpp) |
| 202109-1 | 100/100 | [202109-1.cpp](2021/202109-1.cpp) |
| 202109-2 | 100/100 | [202109-2.cpp](2021/202109-2.cpp) |
| 202104-1 | 100/100 | [202104-1.cpp](2021/202104-1.cpp) |
| 202104-2 | 100/100 | [202104-2.cpp](2021/202104-2.cpp) |
| 202012-1 | 100/100 | [202012-1.cpp](2020/202012-1.cpp) |
| 202012-2 | 100/100 | [202012-2.cpp](2020/202012-2.cpp) |
| 202009-1 | 100/100 | [202009-1.cpp](2020/202009-1.cpp) |
| 202009-2 | 100/100 | [202009-2.cpp](2020/202009-2.cpp) |
| 202006-1 | 100/100 | [202006-1.cpp](2020/202006-1.cpp) |
| 201912-1 | 100/100 | [201912-1.cpp](2019/201912-1.cpp) |
| 201912-2 | 100/100 | [201912-2.cpp](2019/201912-2.cpp) |
| 201909-1 | 100/100 | [201909-1.cpp](2019/201909-1.cpp) |
| 201909-2 | 100/100 | [201909-2.cpp](2019/201909-2.cpp) |
| 201903-1 | 100/100 | [201903-1.cpp](2019/201903-1.cpp) |
| 201903-2 | 100/100 | [201903-2.cpp](2019/201903-2.cpp) |
| 201812-1 | 100/100 | [201812-1.cpp](2018/201812-1.cpp) |
| 201812-2 | 100/100 | [201812-2.cpp](2018/201812-2.cpp) |
| 201809-1 | 100/100 | [201809-1.cpp](2018/201809-1.cpp) |

**Recorded total: 1970/2000.**

The repository does not reproduce official problem statements. Refer to the official CCF CSP materials for task descriptions and constraints.

### 202112-2 performance case study

The historical solution scans every integer `x` in `[0, N)`, which makes its running time depend directly on `N`. The optimized version instead advances between points where either `f(x)` or `g(x)` changes, summing the contribution of each constant interval in one step. This preserves the result while reducing the number of iterations to roughly the number of sequence intervals.
