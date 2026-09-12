// Historical coursework solution for CCF CSP 201909-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;

	scanf("%d%d", &N, &M);

	int a, sum = 0, maxKeep = 0, id;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		sum += a;
		int drop = 0;
		for (int j = 0; j < M; j++)
		{
			int num;
			scanf("%d", &num);
			sum += num;
			drop -= num;
		}
		if (drop > maxKeep)
		{
			maxKeep = drop;
			id = i;
		}
	}

	printf("%d %d %d\n", sum, id + 1, maxKeep);
	return 0;
}
