#include <stdio.h>

int main()
{
	int n, sum;
	while(1)
	{
		sum=0;
		scanf("%d", &n);
		if(n==0) break;
		for(int i=1;i<=n;i++)
			sum+=i*i;
		printf("%d\n", sum);
	}
	
	return 0;
}
