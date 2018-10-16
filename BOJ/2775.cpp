#include <stdio.h>

int a[15][14];

int main()
{
	int t, k, n, sum;
	scanf("%d", &t);
	for(int i=0;i<14;i++)
		a[0][i]=i+1;
	for(int i=1;i<15;i++)
	{
		for(int j=0;j<14;j++)
		{
			sum=0;
			for(int k=0;k<=j;k++)
				sum+=a[i-1][k];
			a[i][j]=sum;
		}
	}
	for(int i=0;i<t;i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", a[k][n-1]);
	}
	
	return 0;
}
