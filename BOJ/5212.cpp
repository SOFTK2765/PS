#include <stdio.h>

int main()
{
	int r, c, count, minx, miny, maxx, maxy, xcount=0;
	char a[10][11];
	bool check[10][11];
	for(int i=0;i<10;i++)
		for(int j=0;j<11;j++)
			check[i][j]=false;
	scanf("%d %d", &r, &c);
	for(int i=0;i<r;i++)
		scanf("%s", a[i]);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			count=0;
			if(a[i][j]=='X')
			{
				if((i-1<0) || (a[i-1][j]=='.')) count++;
				if((j+1>c-1) || (a[i][j+1]=='.')) count++;
				if((i+1>r-1) || (a[i+1][j]=='.')) count++;
				if((j-1<0) || (a[i][j-1]=='.')) count++;
				if(count<3)
				{
					check[i][j]=true;
					xcount++;
				}
			}
		}
	}
	minx=0;
	miny=0;
	maxx=c-1;
	maxy=r-1;
	count=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(check[i][j]==true)
			{
				if(count==0) miny=i;
				if(count==xcount-1) maxy=i;
				count++;
			}
		}
	}
	count=0;
	for(int j=0;j<c;j++)
	{
		for(int i=0;i<r;i++)
		{
			if(check[i][j]==true)
			{
				if(count==0) minx=j;
				if(count==xcount-1) maxx=j;
				count++;
			}
		}
	}
	for(int i=miny;i<=maxy;i++)
	{
		for(int j=minx;j<=maxx;j++)
		{
			if(check[i][j]==true) printf("X");
			else printf(".");
		}
		printf("\n");
	}
	
	return 0;
}
