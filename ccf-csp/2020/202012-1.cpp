// Historical coursework solution for CCF CSP 202012-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		b+=x * y;
	}
	b= max(0,b);
	printf("%d",b);
	return 0;
}
