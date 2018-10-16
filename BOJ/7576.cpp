#include <stdio.h>

int a[1001][1001], temp[1001][1001];
bool change;

int main()
{
	int m, n, count=0, esc=0;
	scanf("%d %d", &m, &n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				esc=1;
				break;
			}
			if(i==m-1 && j==n-1)
			{
				printf("%d", 0);
				return 0;
			}
		}
		if(esc==1) break;
	}
	for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				temp[i][j]=a[i][j];
		
	while(1)
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				a[i][j]=temp[i][j];
		change=false;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==1)
				{
					if(i!=0 && a[i-1][j]!=-1 && a[i-1][j]==0)
					{
						temp[i-1][j]=1;
						change=true;
					}
					if(j!=n-1 && a[i][j+1]!=-1 && a[i][j+1]==0)
					{
						temp[i][j+1]=1;
						change=true;
					}
					if(i!=m-1 && a[i+1][j]!=-1 && a[i+1][j]==0)
					{
						temp[i+1][j]=1;
						change=true;
					}
					if(j!=0 && a[i][j-1]!=-1 && a[i][j-1]==0)
					{
						temp[i][j-1]=1;
						change=true;
					}
				}
			}
		}
		if(change==false) break;
		count++;
	}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]==0)
			{
				printf("%d", -1);
				return 0;
			}
	printf("%d", count);
	
	return 0;
}
