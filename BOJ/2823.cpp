#include <stdio.h>

int main()
{
	int r, c, starti, startj, nowi, nowj, result, move=0;
	int a[11][11];
	bool visit[11][11], start[11][11], wall[13][13];
	scanf("%d %d", &r, &c);
	for(int i=1;i<=r;i++)
		scanf("%s", a[i]+4*i);
	for(int i=0;i<c+2;i++)
		wall[0][i]=true;
	for(int i=0;i<r+2;i++)
		wall[i][c+1]=true;
	for(int i=0;i<c+2;i++)
		wall[r+1][i]=true;
	for(int i=0;i<r+2;i++)
		wall[i][0]=true;
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++)
			if(a[i][j]=='.')
			{
				nowi=i;
				nowj=j;
				visit[i][j]=true;
				start[i][j]=true;
			}
	for(;;)
	{
		if(a[nowi][nowj+1]=='.' && visit[nowi][nowj+1]==false && wall[nowi][nowj+1]==false)
		{
			nowj++;
			visit[nowi][nowj]=true;
			move++;
		}
		else if(a[nowi+1][nowj]=='.' && visit[nowi+1][nowj]==false && wall[nowi+1][nowj]==false)
		{
			nowi++;
			visit[nowi][nowj]=true;
			move++;
		}
		else if(a[nowi][nowj-1]=='.' && visit[nowi][nowj-1]==false && wall[nowi][nowj-1]==false)
		{
			nowj--;
			visit[nowi][nowj]=true;
			move++;
		}
		else if(a[nowi-1][nowj]=='.' && visit[nowi-1][nowj]==false && wall[nowi-1][nowj]==false)
		{
			nowi--;
			visit[nowi][nowj]=true;
			move++;
		}
		else if((start[nowi][nowj+1]==true || start[nowi+1][nowj]==true || start[nowi][nowj-1]==true || start[nowi-1][nowj]==true) && move>=4)
		{
			result=0;
			break;
		}
		else
		{
			result=1;
			break;
		}
	}
	printf("%d", result);
	
	return 0;
}
