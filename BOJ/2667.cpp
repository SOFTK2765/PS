#include <stdio.h>
#include <string.h>

char a[27][27];
bool c[27][27];
int res[625];
int count=0;

int f(int n)
{
	int fcount=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n+2;j++)
		{
			for(int k=0;k<n+2;k++)
			{
				if(a[j][k]=='1' && c[j][k]==false && (c[j+1][k]==true || c[j-1][k]==true || c[j][k+1]==true || c[j][k-1]==true))
				{
					c[j][k]=true;
					fcount++;
				}
			}
		}
		for(int j=n+1;j>=0;j--)
		{
			for(int k=n+1;k>=0;k--)
			{
				if(a[j][k]=='1' && c[j][k]==false && (c[j+1][k]==true || c[j-1][k]==true || c[j][k+1]==true || c[j][k-1]==true))
				{
					c[j][k]=true;
					fcount++;
				}
			}
		}
	}
	count++;
	
	return fcount;
}

int main()
{
	memset(a, '0', sizeof(a));
	int n, pos=0, min, temp;
	scanf("%d ", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s", a[i]+1);
		a[i][n+1]='0';
	}
	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<n+2;j++)
		{
			if(a[i][j]=='1' && c[i][j]==false)
			{
				c[i][j]=true;
				res[pos]=f(n);
				pos++;
			}
		}
	}
	for(int i=0;i<count-1;i++)
	{
		min=i;
		for(int j=i+1;j<count;j++)
			if(res[min]>res[j]) min=j;
		temp=res[min];
		res[min]=res[i];
		res[i]=temp;
	}
	printf("%d\n", count);
	for(int i=0;i<count;i++)
		printf("%d\n", res[i]);
		
	return 0;
}
