#include <stdio.h>

int main()
{
	int n, sum=1;
	scanf("%d", &n);
	if(n==1)
	{
		printf("%d", 1);
		return 0;
	}
	for(int i=0;;i++)
	{
		if(sum<n && n<=sum+(i*6))
		{
			printf("%d", i+1);
			break;
		}
		sum+=i*6;
	}
	
	return 0;
}
