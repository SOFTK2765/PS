#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

bool visit[501];
bool check[501][501], del[501][501], visitrt[501][501];

int main()
{
	while(1)
	{
		int n, m, s, e;
		cin >> n >> m;
		if(n==0 && m==0) break;
		cin >> s >> e;
		vector<vector<pair<int, int>>> adj(n+1);
		vector<vector<int>> radj(n+1);
		for(int i=0;i<m;i++)
		{
			int u, v, p;
			cin >> u >> v >> p;
			adj[u].push_back({v, p});
			radj[v].push_back(u);
		}
		priority_queue<pair<int, int>> pq;
		vector<int> d(n+1, INF);
		pq.push({d[s] = 0, s});
		memset(visit, 0, sizeof(visit));
		while(!pq.empty())
		{
			int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
			pq.pop();
			if(visit[here]) continue;
			visit[here] = true;
			for(int i=0;i<size;i++)
			{
				int there = adj[here][i].first, cost = adj[here][i].second;
				if(dist+cost<d[there]) pq.push({-(d[there] = dist+cost), there});
			}
		}
		memset(visitrt, 0, sizeof(visitrt));
		queue<pair<int, int>> bfs1;
		bfs1.push({s, 0});
		memset(check, 0, sizeof(check));
		while(!bfs1.empty())
		{
			int size = bfs1.size();
			while(size--)
			{
				int here = bfs1.front().first, dist = bfs1.front().second, size = adj[here].size();
				bfs1.pop();
				for(int i=0;i<size;i++)
				{
					int there = adj[here][i].first, cost = adj[here][i].second;
					if(visitrt[here][there]) continue;
					visitrt[here][there] = true;
					if(dist+cost==d[there])
					{
						check[here][there] = true;
						bfs1.push({there, d[there]});
					}
				}
			}
		}
		memset(visitrt, 0, sizeof(visitrt));
		memset(del, 0, sizeof(del));
		queue<int> bfs2;
		bfs2.push(e);
		while(!bfs2.empty())
		{
			int size = bfs2.size();
			while(size--)
			{
				int here = bfs2.front(), size = radj[here].size();
				bfs2.pop();
				if(here==s) continue;
				for(int i=0;i<size;i++)
				{
					int there = radj[here][i];
					if(visitrt[here][there] || !check[there][here]) continue;
					bfs2.push(there);
					visitrt[here][there] = true;
					del[there][here] = true;
				}
			}
		}
		fill(d.begin(), d.end(), INF);
		pq.push({d[s] = 0, s});
		memset(visit, 0, sizeof(visit));
		while(!pq.empty())
		{
			int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
			pq.pop();
			if(visit[here]) continue;
			visit[here] = true;
			for(int i=0;i<size;i++)
			{
				int there = adj[here][i].first, cost = adj[here][i].second;
				if(del[here][there]) continue;
				if(dist+cost<d[there]) pq.push({-(d[there] = dist+cost), there});
			}
		}
		cout << (d[e]==INF?-1:d[e]) << '\n';
	}

	return 0;
}