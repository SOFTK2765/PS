#include <stdio.h>

char a[100][101];
int r, c;

int f(int i, int j)
{
	int count=0;
	if(i-1>=0 && a[i-1][j]=='*') count++;
	if(i-1>=0 && j+1<c && a[i-1][j+1]=='*') count++;
	if(j+1<c && a[i][j+1]=='*') count++;
	if(i+1<r && j+1<c && a[i+1][j+1]=='*') count++;
	if(i+1<r && a[i+1][j]=='*') count++;
	if(i+1<r && j-1>=0 && a[i+1][j-1]=='*') count++;
	if(j-1>=0 && a[i][j-1]=='*') count++;
	if(i-1>=0 && j-1>=0 && a[i-1][j-1]=='*') count++;
	
	return count;
}

int main()
{
	while(1)
	{
		scanf("%d %d", &r, &c);
		if(r==0 && c==0) break;
		for(int i=0;i<r;i++)
			scanf("%s", a[i]);
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j]=='.') printf("%d", f(i, j));
				else if(a[i][j]=='*') printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
