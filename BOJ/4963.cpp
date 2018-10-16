#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int a[51][51];
bool b[51][51]={};
int c;
int w, h;
int dx[]={0, 1, 1, 1, 0, -1, -1, -1};
int dy[]={1, 1, 0, -1, -1, -1, 0, 1};
int cnt=0;

void f(int y, int x)
{
	int ans=1;
	int nx, ny;
	b[y][x]=true;
	for(int i=0;i<8;i++)
	{
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx<0 || ny<0 || nx>=w || ny>=h || a[ny][nx]!=1 || b[ny][nx]==true) continue;
		f(ny, nx);
	}
}

int main()
{
	while(true)
	{
		cnt=0;
		memset(b, 0, sizeof(b));
		
		scanf("%d %d", &w, &h);
		if(w==0 && h==0) break;
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				scanf("%d", &a[i][j]);
	
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				if(a[i][j]==1 && b[i][j]==false)
				{
					f(i, j);
					cnt++;
				}
				printf("%d\n", cnt);
	}
		
	return 0;
}
