#include <stdio.h>

int main()
{
	int n, m, k, x1, x2, y1, y2, sum=0;
	scanf("%d %d", &n, &m);
	int a[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d", &a[i+1][j+1]);
		}
	}
	
	scanf("%d", &k);
	
	for(int i=0;i<k;i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if(x1==x2)
		{
			for(int j=y1;j<=y2;j++)
				sum+=a[x1][j];
		}
		else if(y1==y2)
		{
			for(int j=x1;j<=x2;j++)
				sum+=a[j][y1];
		}
		else
		{
			for(int j=x1;j<=x2;j++)
			{
				for(int k=y1;k<=y2;k++)
				{
					sum+=a[j][k];
				}
			}
		}
		printf("%d\n", sum);
		sum=0;
	}
	
	return 0;
}
