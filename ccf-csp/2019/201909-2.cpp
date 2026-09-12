// Historical coursework solution for CCF CSP 201909-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>
struct tree
{
	int appleNum;
	bool flag;//true为掉落
};

int main()
{
	int N;
	scanf("%d", &N);
	tree obj[N];
	for (int i = 0; i < N; i++)
		obj[i].appleNum = 0, obj[i].flag = false;

	for (int i = 0; i < N; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			int operation;
			scanf("%d", &operation);
			if (j == 0)
				obj[i].appleNum = operation;
			else
			{
				if (operation <= 0)
					obj[i].appleNum += operation;
				else
				{
					if (obj[i].appleNum > operation)
					{
						obj[i].flag = true;
						obj[i].appleNum = operation;
					}
				}

			}

		}
	}

	int totalAppleNum = 0, flagCount = 0;
	int continueCount = 0;
	for (int i = 0; i < N; i++)
	{
		totalAppleNum += obj[i].appleNum;
		if (obj[i].flag)
			flagCount++;
		if (obj[(i - 1 + N) % N].flag && obj[i].flag && obj[(i + 1) % N].flag)
			continueCount++;
	}

	printf("%d %d %d\n", totalAppleNum, flagCount, continueCount);
	return 0;
}
