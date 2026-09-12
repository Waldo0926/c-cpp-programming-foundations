// Historical coursework solution for CCF CSP 201903-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>
int main(void)
{
	int n,i,j,k,l,a[4];
	scanf("%d",&n);
	char s[7],o[3];
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		for(j=0;j<4;j++)
			a[j]=s[2*j]-'0';//4个数字
		for(j=0;j<3;j++)
			o[j]=s[2*j+1];//3个符号
		k=3;//总计算次数为3次

		for(j=0;j<k;j++)
		{
			if(o[j]=='x' || o[j]=='/')
			{
				if(o[j]=='x')
					a[j]*=a[j+1];
				else
					a[j]/=a[j+1];
				for(l=j+1;l<k;l++)
				{
					a[l]=a[l+1];//将数字前移
					o[l-1]=o[l];//将符号前移
				}
				k--;//运算次数-1
				j--;//因为数字和符号均前移了，所以j-1
			}
		}

		for(j=0;j<k;j++)//直接从前向后计算
		{
			if(o[j]=='+')
				a[j+1]+=a[j];
			else
				a[j+1]=a[j]-a[j+1];
		}
		if(a[j]==24)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
