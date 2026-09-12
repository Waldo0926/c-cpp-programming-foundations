// Historical coursework solution for CCF CSP 202009-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>

int main()
{
	int n, k, t, x1, yd, xr, yu;
	int x, y;

	scanf("%d%d%d%d%d%d%d", &n, &k, &t, &x1, &yd, &xr, &yu);
	int passby = 0, stay = 0;
	for (int i = 1; i <= n; i++)
	{
		int douliu = 0, flag1 = 0, flag2 = 0;
		for (int j = 1; j <= t; j++)
		{
			scanf("%d%d", &x, &y);
			if (x < x1 || x > xr || y < yd || y > yu)//x,y同时满足条件才在高风险地区
				douliu = 0;
			else
			{
				if (flag1 == 0) flag1 = 1;//若经过 则标记！
				if (flag2 == 0 && ++douliu == k) flag2 = 1;//++cnt统计“经过”次数 一旦满足逗留条件 标记！
			}
		}
		if (flag1) passby++;//统计经过的个数
		if (flag2) stay++;//统计逗留的个数
	}
	printf("%d\n%d", passby, stay);

	return 0;
}
