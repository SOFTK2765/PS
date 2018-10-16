#include <stdio.h>

int main()
{
	int n;
	long long a, b, mul=1;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a, &b);
		for(long long j=2;;j++)
		{
			if(a%j==0 && b%j==0)
			{
				a/=j;
				b/=j;
				mul*=j;
				j=2;
			}
			if((j>a || j>b) || (a==1 && b==1)) break;
		}
		printf("%lld\n", mul*a*b);
		mul=1;
	}
	return 0;
}
