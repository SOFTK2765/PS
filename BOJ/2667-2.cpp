#include <stdio.h>
#include <algorithm>

using namespace std;

char a[26][26];
bool b[26][26]={};
int c[626];
int n;
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
int cnt=0;

int f(int y, int x)
{
	int ans=1;
	int nx, ny;
	b[y][x]=true;
	for(int i=0;i<4;i++)
	{
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx<0 || ny<0 || nx>=n || ny>=n || a[ny][nx]!='1' || b[ny][nx]==true) continue;
		ans+=f(ny, nx);
	}
	return ans;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%s", a[i]);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]=='1' && b[i][j]==false)
			{
				c[cnt]=f(i, j);
				cnt++;
			}
	
	sort(c, c+cnt);
	printf("%d\n", cnt);
	for(int i=0;i<cnt;i++)
		printf("%d\n", c[i]);
		
	return 0;
}
