#include <stdio.h>

int main()
{
	int n, sum=0;
	scanf("%d", &n);
	for(int i=0;i<n+1;i++)
		sum+=i;
	printf("%d", sum*(n+2));
	
	return 0;
}
