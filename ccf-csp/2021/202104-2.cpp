// Historical coursework solution for CCF CSP 202104-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include<bits/stdc++.h>
using namespace std;
int a[601][601], b[601][601];
int main()
{
	int n, L, r, t;
	scanf("%d%d%d%d", &n, &L, &r, &t);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int left = max(1, j - r), right = min(n, j + r);
			int up = max(1, i - r), down = min(n, i + r);
			int sum = b[down][right] - b[down][left - 1] - b[up - 1][right] + b[up - 1][left - 1];
			if (sum <= (down - up + 1) * (right - left + 1)*t)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
