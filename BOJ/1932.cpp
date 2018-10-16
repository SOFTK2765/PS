#include <stdio.h>

int func(int n);

int main()
{
	int n, max, maxindex, maxindexsave, s=0;
	int a[501][501];
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			scanf("%d", &a[i][j]);
	for(int i=1;i<=n;i++)
		func(i);
	printf("%d", s);
}

int func(int n)
{
	for(int i=0;i<n;i++)
	{
		
	}
}
