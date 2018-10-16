#include <stdio.h>

int main()
{
	int n, k=2;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		k=k*2-1;
	printf("%d", k*k);
	
	return 0;
}
