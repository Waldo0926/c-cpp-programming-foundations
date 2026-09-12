// Historical coursework solution for CCF CSP 201912-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include<stdio.h>
int main(void)
{
	int score[5] = {0};
	int n, xi, yi, flag1, flag2;
	scanf("%d", &n);
	int bin[n + 1][2] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &bin[i][0], &bin[i][1]);
	}
	for (int i = 0; i < n; i++ )
	{
		flag1 = 0;
		for (int j = 0; j < n; j++)
		{
			if (bin[i][0] == bin[j][0] && bin[i][1] == bin[j][1] + 1)flag1++;
			else if (bin[i][0] == bin[j][0] + 1 && bin[i][1] == bin[j][1])flag1++;
			else if (bin[i][0] == bin[j][0] - 1 && bin[i][1] == bin[j][1])flag1++;
			else if (bin[i][0] == bin[j][0] && bin[i][1] == bin[j][1] - 1)flag1++;
		}
		if (flag1 == 4)
		{
			flag2 = 0;
			for (int j = 0; j < n; j++)
			{
				if (bin[i][0] == bin[j][0] + 1 && bin[i][1] == bin[j][1] + 1)flag2++;
				else if (bin[i][0] == bin[j][0] + 1 && bin[i][1] == bin[j][1] - 1)flag2++;
				else if (bin[i][0] == bin[j][0] - 1 && bin[i][1] == bin[j][1] + 1)flag2++;
				else if (bin[i][0] == bin[j][0] - 1 && bin[i][1] == bin[j][1] - 1)flag2++;
			}
			score[flag2]++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", score[i]);
	}
	return 0;
}
