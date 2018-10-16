#include <stdio.h>

int main()
{
	int n, s, a, sum=0;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &s, &a);
		sum+=a%s;
	}
	printf("%d", sum);
	
	return 0;
}
