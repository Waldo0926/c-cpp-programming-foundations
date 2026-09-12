// Historical coursework solution for CCF CSP 201903-1.
// Encoding normalized to UTF-8 during repository cleanup; algorithmic logic preserved.

#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int num[n];
	int max,min;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	if(num[0]>num[n-1]){ //降序
		max = num[0];
		min = num[n-1];
	}
	else{
		max = num[n-1];
		min = num[0];
	}
	if(n%2==0){
		int sum = num[n/2]+num[(n/2)-1];
		if(sum%2==0){
			printf("%d %d %d",max,sum/2,min);
		}
		else{
			printf("%d %.1f %d",max,sum/2.0,min);
		}
	}
	else{
		printf("%d %d %d",max,num[(n-1)/2],min);
	}
	return 0;
}
