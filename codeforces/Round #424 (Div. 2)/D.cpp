#include <stdio.h>
#include <algorithm>

int n, k, p;
int a[1001];
long long b[2001];

int main()
{
	scanf("%d %d %d", &n, &k, &p);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<k;i++)
		scanf("%lld", &b[i]);
	long long max=0;
	for(int i=0;i<n;i++)
	{
		long long min=10000000000;
		for(int j=0;j<k;j++)
		{
			if(abs(a[i]-b[j])+abs(b[j]-p)<min)
			{
				min=abs(a[i]-b[j])+abs(b[j]-p);
				b[j]=10000000000;
			}
		}
		if(min>max) max=min;
	}
	printf("%lld", max);
	
	return 0;
}
