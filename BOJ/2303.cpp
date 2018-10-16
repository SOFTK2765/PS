#include <stdio.h>

int a[1000][5], check[3];
int sum, max, bmax, maxsum, nk, min, temp;

void f(int p)
{
	sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			for(int k=j+1;k<5;k++)
			{
				sum=(a[p][i]+a[p][j]+a[p][k])%10;
				if(maxsum<=sum)
				{
					maxsum=sum;
					nk=p;
				}
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<5;j++)
			scanf("%d", &a[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<5;j++)
			f(i);
	printf("%d", nk+1);
	
	return 0;
}
