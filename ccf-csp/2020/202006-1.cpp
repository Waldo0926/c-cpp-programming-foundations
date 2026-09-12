// Historical coursework solution for CCF CSP 202006-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define _for(i, a, b) for(int i = a; i <= b; i++)

using namespace std;

int aA[3];
int aB[3];
const int N = 1e+3;
struct Node
{
	int x;
	int y;
	char type;
} node[N + 10];

int main()
{
	int n, m;
	scanf("%d%d",&n,&m);

	_for(i, 1, n)
	{
		scanf("%d%d %c", &node[i].x, &node[i].y, &node[i].type);  // %c前面添加空格，避免空格被当成字符输入。
	}
	_for(i, 1, m)
	{
		memset(aA, 0, sizeof(aA));
		memset(aB, 0, sizeof(aB));
		int p0, px, py;
		scanf("%d%d%d", &p0, &px, &py);

		_for(j, 1, n)
		{
			int tmp = p0 + node[j].x * px + node[j].y * py;

			if (node[j].type == 'A')
			{
				if (tmp < 0)
					aA[0]++;
				else
					aA[1]++;
			}
			else if (node[j].type == 'B')
			{
				if (tmp < 0)
					aB[0]++;
				else
					aB[1]++;
			}
		}

		if ((aA[0] > 0 && aA[1] > 0) || (aB[0] > 0 && aB[1] > 0))    // 除去同一区域的不满足的情况
		{
			printf("No\n");
		}
		else
		{
			if ((aA[1] > 0 && aB[0] > 0) || (aA[0] > 0 && aB[1] > 0))  // 求出不同区域满足条件的情况
				printf("Yes\n");
			else
				printf("No\n");
		}
	}

	return 0;
}
