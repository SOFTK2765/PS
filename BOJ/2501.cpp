#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			k-=1;
		}
		if(k==0)
		{
			printf("%d", i);
			break;
		}
		if(i==n)
			printf("%d", 0);
	}
	return 0;
}
