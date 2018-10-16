#include <stdio.h>

long long int a[101]={0, 1, 1};

int main()
{
	for(int i=3;i<101;i++)
		a[i]=a[i-2]+a[i-3];
	int t;
	scanf("%d", &t);
	int n;
	for(int i=0;i<t;i++)
	{
		scanf("%d", &n);
		printf("%lld\n", a[n]);
	}
	
	return 0;
}
