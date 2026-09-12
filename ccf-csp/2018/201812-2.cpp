// Historical coursework solution for CCF CSP 201812-2.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include<iostream>
using namespace std;
typedef long long  ll;
int main()
{
	int a[4] = {0};
	int all_time = 0;
	//	注意灯亮的顺序是红绿黄
	for (int i = 1; i < 4; i++)
	{
		scanf("%d", &a[i]);
		all_time += a[i];
	}
	int n;
	scanf("%d", &n);
	ll time = 0;
	for (int i = 0; i < n; i++)
	{
		int k, t;
		scanf("%d%d",&k,&t);
		if (k == 0) time += t;
		else if (k == 3)
		{
			//表示绿灯还剩多少秒
			int temp = time % all_time;
			//			小于的时候直接就可以过
			if (temp > t && temp < t + a[1] + a[2]) //这里一定要加上后面那一句temp<t+a[1]+a[2]，因为这里如果它大于的话相当于到了下一轮绿灯，直接就可以过
			{
				time += (a[1] + a[2] - temp + t);
			}

		}
		else
		{
			int temp = time % all_time;
			//			计算到绿灯所需要的时间
			int need = 0;
			if (k == 1) need = t;
			else if (k == 2) need = t + a[1];
			if (temp < need) time += (need - temp);
			//如果到达时已经超过了这轮绿灯只能等下一轮（肯定不可能超过下一轮绿灯，这里已经对一轮绿灯所需时间取余了）
			else if (temp > need + a[3]) time += (all_time - temp + need);

		}
	}
	printf("%lld",time);
	return 0;
}
