#include <bits/stdc++.h>

using namespace std;

bool visit[100001];
pair<int, int> a[100001];

int main()
{
	int n;
	scanf("%d", &n);
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n-1;i++)
	{
		int u, v;
		scanf(" %d %d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
		a[i] = {u, v};
	}
	queue<int> bfs;
	bfs.push(1);
	visit[1] = true;
	int val = 0;
	map<pair<int, int>, int> res;
	while(!bfs.empty())
	{
		int size = bfs.size();
		while(size--)
		{
			int x = bfs.front(), adjsize = adj[x].size();
			bfs.pop();
			for(int i=0;i<adjsize;i++)
			{
				int nx = adj[x][i];
				if(visit[nx]) continue;
				visit[nx] = true;
				bfs.push(nx);
				res[{x, nx}] = val;
				res[{nx, x}] = val++;
			}
		}
	}
	for(int i=0;i<n-1;i++)
		printf("%d\n", res[{a[i].first, a[i].second}]);

	return 0;
}