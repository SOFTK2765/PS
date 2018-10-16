#include <stdio.h>

int main()
{
	int i, n, count=1;
	int a[500000];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n-1;i++)
		if(a[i]>a[i+1]) count++;
	printf("%d\n", count);
	
	return 0;
}
