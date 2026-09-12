// Historical coursework solution for CCF CSP 201809-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>

int main()
{
	int n, i, avg;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			avg = (a[i] + a[i + 1]) / 2;
		}
		else if (i == n - 1)
		{
			avg = (a[i - 1] + a[i]) / 2;
		}
		else
		{
			avg = (a[i - 1] + a[i] + a[i + 1]) / 3;
		}
		printf("%d ", avg);
	}
	return 0;
}
