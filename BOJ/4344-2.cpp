#include <stdio.h>

int main()
{
	int c, n;
	int a[1000];
	scanf("%d", &c);
	for(int i=0;i<c;i++)
	{
		scanf("%d", &n);
		double sum=0;
		int count=0;
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[j]);
			sum+=a[j];
		}
		sum/=n;
		for(int j=0;j<n;j++)
			if(a[j]>sum) count++;
		printf("%.3f%%\n", 100*(double)count/n);
	}
	
	return 0;
}
