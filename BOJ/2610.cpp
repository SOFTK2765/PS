#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int dist[101][101];
bool visit[101];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i!=j) dist[i][j] = INF;
	vector<vector<int>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2;
		scanf(" %d %d", &tmp1, &tmp2);
		dist[tmp1][tmp2] = dist[tmp2][tmp1] = 1;
		adj[tmp1].push_back(tmp2);
		adj[tmp2].push_back(tmp1);
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
				dist[j][k] = min(dist[j][k], dist[j][i]+dist[i][k]);
	vector<int> v;
	for(int i=1;i<=n;i++)
		if(!visit[i])
		{
			int mn = 0, mni = i;
			queue<int> bfs;
			bfs.push(i);
			visit[i] = true;
			for(int j=1;j<=n;j++)
				if(dist[i][j]!=INF) mn = max(mn, dist[i][j]);
			while(!bfs.empty())
			{
				int size = bfs.size();
				while(size--)
				{
					int here = bfs.front();
					bfs.pop();
					int adjsize = adj[here].size();
					for(int j=0;j<adjsize;j++)
					{
						int there = adj[here][j];
						if(visit[there]) continue;
						bfs.push(there);
						visit[there] = true;
						int tmp = 0;
						for(int k=1;k<=n;k++)
							if(dist[there][k]!=INF) tmp = max(tmp, dist[there][k]);
						if(mn>tmp)
						{
							mn = tmp;
							mni = there;
						}
					}
				}
			}
			v.push_back(mni);
		}
	sort(v.begin(), v.end());
	int vsize = v.size();
	printf("%d\n", vsize);
	for(int i=0;i<vsize;i++)
		printf("%d\n", v[i]);

	return 0;
}