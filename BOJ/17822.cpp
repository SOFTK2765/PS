#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int cp[51][51];
int tmpcp[51];
bool visit[51][51];

int main()
{
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf(" %d", &cp[i][j]);
	queue<pair<pair<int, int>, int>> bfs;
	while(t--)
	{
		int x, d, k;
		scanf(" %d %d %d", &x, &d, &k);
		for(int i=x;i<=n;i+=x)
			if(d==0)
			{
				for(int j=1;j<=m;j++)
					tmpcp[j] = cp[i][j];
				for(int j=1;j<=m;j++)
					cp[i][j] = tmpcp[((j-k+m-1)%m)+1];
			}
			else
			{
				for(int j=1;j<=m;j++)
					tmpcp[j] = cp[i][j];
				for(int j=1;j<=m;j++)
					cp[i][j] = tmpcp[((j+k-1)%m)+1];
			}
		memset(visit, 0, sizeof(visit));
		bool flag = false;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if(cp[i][j]!=0 && !visit[i][j])
				{
					bfs.push({{j, i}, cp[i][j]});
					visit[i][j] = true;
					while(!bfs.empty())
					{
						int size = bfs.size();
						while(size--)
						{
							int x = bfs.front().first.first, y = bfs.front().first.second, num = bfs.front().second;
							bfs.pop();
							for(int l=0;l<4;l++)
							{
								int nx = x+dx[l], ny = y+dy[l];
								if(nx==0) nx = m;
								else if(nx==m+1) nx = 1;
								if(ny<1 || ny>n || visit[ny][nx] || cp[ny][nx]==0 || cp[ny][nx]!=num) continue;
								bfs.push({{nx, ny}, cp[ny][nx]});
								visit[ny][nx] = true;
								cp[ny][nx] = 0;
								cp[y][x] = 0;
								flag = true;
							}
						}
					}
				}
		if(!flag)
		{
			float sum = 0;
			int cnt = 0;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
					if(cp[i][j]!=0)
					{
						sum += cp[i][j];
						cnt++;
					}
			sum /= cnt;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
					if(cp[i][j]!=0)
					{
						if(cp[i][j]>sum) cp[i][j]--;
						else if(cp[i][j]<sum) cp[i][j]++;
					}
		}
	}
	int res = 0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			res += cp[i][j];
	printf("%d", res);

	return 0;
}