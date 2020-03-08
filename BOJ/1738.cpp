#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

bool visit[101], check[101], dvisit[101];
int d[101];

vector<vector<pair<int, int>>> adj(101);
vector<vector<pair<int, int>>> radj(101);

bool dflag;

void dfs(int here)
{
	if(here==1)
	{
		dflag = true;
		cout << here << " ";
		return;
	}
	int size = radj[here].size();
	for(int i=0;i<size;i++)
	{
		int there = radj[here][i].first, cost = radj[here][i].second;
		if(d[here]-cost==d[there] && !dvisit[there])
		{
			dvisit[there] = true;
			dfs(there);
			if(dflag)
			{
				cout << here << " ";
				break;
			}
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, -w});
		radj[v].push_back({u, -w});
	}
	queue<int> bfs;
	bfs.push(n);
	visit[n] = true;
	while(!bfs.empty())
	{
		int size = bfs.size();
		while(size--)
		{
			int here = bfs.front(), radjsize = radj[here].size();
			bfs.pop();
			check[here] = true;
			for(int i=0;i<radjsize;i++)
			{
				int there = radj[here][i].first;
				if(visit[there]) continue;
				bfs.push(there);
				visit[there] = true;
			}
		}
	}
	for(int i=2;i<=n;i++)
		d[i] = INF;
	bool flag = false;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			int size = adj[j].size();
			for(int k=0;k<size;k++)
			{
				int there = adj[j][k].first, cost = adj[j][k].second;
				if(check[there] && d[j]!=INF && d[j]+cost<d[there])
				{
					d[there] = d[j]+cost;
					if(i==n-1) flag = true;
				}
			}
		}
	if(flag || !check[1]) cout << -1;
	else dfs(n);

	return 0;
}