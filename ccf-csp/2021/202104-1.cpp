// Historical coursework solution for CCF CSP 202104-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int n, m, l;
int a[300];
int main()
{
	scanf("%d%d%d",&n,&m,&l);
	int x;
	for (int i = 0; i < n * m; i++)
	{
		scanf("%d", &x);
		a[x]++;
	}
	for (int i = 0; i < l; i++)
		printf("%d ", a[i]);
	return 0;
}
