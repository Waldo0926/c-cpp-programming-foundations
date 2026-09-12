// Historical coursework solution for CCF CSP 201812-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>

int main()
{
	int r, y, g, n, k, t, i, sum = 0;
	scanf("%d%d%d", &r, &y, &g);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &k, &t);
		if (k == 0 || k == 1)
		{
			t = t;
		}
		if (k == 2)
		{
			t = t + r;
		}
		if (k == 3)
		{
			t = 0;
		}
		sum += t;
	}
	printf("%d", sum);
	return 0;
}
