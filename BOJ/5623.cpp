#include <stdio.h>

int a[1000][1000];

int main()
{
	int n, esc;
	scanf("%d", &n);
	int b[1000];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(int i=0;i<=100000;i++)
	{
		esc=0;
		b[0]=i;
		for(int j=1;j<n;j++)
			b[j]=a[0][j]-b[0];
		for(int j=1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if((b[j]+b[k])!=a[j][k])
				{
					esc=1;
					break;
				}
			}
			if(esc==1) break;
		}
		if(esc==0) break;
	}
	for(int i=0;i<n;i++)
		printf("%d ", b[i]);
	
	return 0;
}
