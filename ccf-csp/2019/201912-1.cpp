// Historical coursework solution for CCF CSP 201912-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>
int main()
{
	int n, i, j, count = 1;
	scanf("%d", &n);
	int a = 0, b = 0, c = 0, d = 0;
	for (j = 0, i = 1; j < n; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7 || i / 10 % 10 == 7 || i / 100 == 7)
		{
			if (i % 4 == 1)
			{
				a++;
			}
			else if (i % 4 == 2)
			{
				b++;
			}
			else if (i % 4 == 3)
			{
				c++;
			}
			else
			{
				d++;
			}
		}
		else
		{
			j++;
		}
	}
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	return 0;
}
