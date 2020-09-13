#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0, 2, -2, 0, 0, 3, -3, 0, 0};
const int dy[] = {0, 0, 1, -1, 0, 0, 2, -2, 0, 0, 3, -3};

int a[101][101];
bool visit[101][101][5];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf(" %d", &a[i][j]);
	int sx, sy, sd, ex, ey, ed;
	scanf(" %d %d %d %d %d %d", &sy, &sx, &sd, &ey, &ex, &ed);
	queue<pair<pair<int, int>, int>> bfs;
	bfs.push({{sx-1, sy-1}, sd});
	visit[sy-1][sx-1][sd] = true;
	int cnt = 0;
	while(!bfs.empty())
	{
		int size = bfs.size();
		while(size--)
		{
			int x = bfs.front().first.first, y = bfs.front().first.second, d = bfs.front().second;
			if(x==ex-1 && y==ey-1 && d==ed)
			{
				printf("%d", cnt);
				return 0;
			}
			bfs.pop();
			for(int i=0;i<3;i++)
			{
				int nx = x+dx[i*4+d-1], ny = y+dy[i*4+d-1], nd = d;
				if(a[ny][nx]==1) break;
				if(nx<0 || nx>=m || ny<0 || ny>=n || visit[ny][nx][nd]) continue;
				bfs.push({{nx, ny}, nd});
				visit[ny][nx][nd] = true;
			}
			int nd = d==1?3:d==2?4:d==3?2:1;
			if(!visit[y][x][nd])
			{
				bfs.push({{x, y}, nd});
				visit[y][x][nd] = true;
			}
			nd = d==1?4:d==2?3:d==3?1:2;
			if(!visit[y][x][nd])
			{	
				bfs.push({{x, y}, nd});
				visit[y][x][nd] = true;
			}
		}
		cnt++;
	}

	return 0;
}