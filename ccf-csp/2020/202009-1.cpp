// Historical coursework solution for CCF CSP 202009-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include<stdio.h>
#include<iostream>
#include<math.h>//pow函数头文件
#include<algorithm>//sort函数头文件
using namespace std;

struct jcd
{
	int num;
	int xi;
	int yi;
	int dis;
};

bool cmp(jcd a, jcd b)
{
	if (a.dis != b.dis)
		return a.dis < b.dis;
	else
		return a.num < b.num;
}

int main()
{
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	jcd locat[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &locat[i].xi, &locat[i].yi);
		locat[i].num = i + 1;
		locat[i].dis = (int)pow(locat[i].xi - x, 2) + (int)pow(locat[i].yi - y, 2);
	}
	sort(locat, locat + n, cmp);
	for (int j = 0; j < 3; j++)
	{
		printf("%d\n", locat[j].num);
	}
	return 0;
}
