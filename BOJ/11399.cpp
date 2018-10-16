#include <stdio.h>

int a[1001];

int main()
{
	int n, max, temp, sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n-1;i++)
	{
		max=i;
		for(int j=i+1;j<n;j++)
			if(a[max]<a[j]) max=j;
		temp=a[max];
		a[max]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<n;i++)
		sum+=a[i]*(i+1);
	printf("%d", sum);
	
	return 0;
}
