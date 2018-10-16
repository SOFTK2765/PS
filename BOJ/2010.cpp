#include <stdio.h>

int main()
{
	int n, a, sum=0, count=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		sum+=a;
		count++;
	}
	printf("%d", sum-count+1);
	
	return 0;
}
