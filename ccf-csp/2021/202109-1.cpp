// Historical coursework solution for CCF CSP 202109-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>

int main()
{
	int n, b, x = - 1, max = 0, min = 0, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &b);
		max += b; //最大值直接每个数相加就对了。
		if (b != x) //判断 如果b的值跟之前的一样 说明a没有变化 即这个数为0 不用累加 反之 a中元素数值有变化 要累加
			min += b;
		x = b;//为了下一个数的判断 与“前一个数”相同的话就默认为0 不相同的话累加。
	}
	printf("%d\n%d\n", max, min);

	return 0;
}
