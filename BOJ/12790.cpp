#include <stdio.h>

int a[8];
int sum;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		sum=0;
		for(int j=0;j<8;j++)
			scanf("%d", &a[j]);
		if(a[0]+a[4]>0) sum+=(a[0]+a[4]);
		else sum+=1;
		if(a[1]+a[5]>0) sum+=5*(a[1]+a[5]);
		else sum+=5;
		if(a[2]+a[6]>0) sum+=2*(a[2]+a[6]);
		sum+=2*(a[3]+a[7]);
		printf("%d\n", sum);
	}
	
	return 0;
}
