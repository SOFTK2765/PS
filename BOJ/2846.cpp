#include <stdio.h>

int main()
{
	int n, max=0, sum=0;
	scanf("%d", &n);
	int a[1000];
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1]) sum+=a[i+1]-a[i];
		else sum=0;
		if(max<sum) max=sum;
	}
	printf("%d", max);
	
	return 0;
}
