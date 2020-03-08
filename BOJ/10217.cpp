#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

bool visit[101][10001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<pair<int, pair<int, int>>>> adj(n+1);
		for(int i=0;i<k;i++)
		{
			int u, v, c, tm;
			cin >> u >> v >> c >> tm;
			adj[u].push_back({v, {c, tm}});
		}
		priority_queue<pair<pair<int, int>, int>> pq;
		vector<vector<int>> d(n+1, vector<int>(m+1, INF));
		pq.push({{d[1][0] = 0, 1}, 0});
		for(int i=1;i<=m;i++)
			d[1][i] = 0;
		memset(visit, 0, sizeof(visit));
		while(!pq.empty())
		{
			int here = pq.top().first.second, dist = -pq.top().first.first, pm = pq.top().second, size = adj[here].size();
			pq.pop();
			if(visit[here][pm]) continue;
			visit[here][pm] = true;
			for(int i=0;i<size;i++)
			{
				int there = adj[here][i].first, cost = adj[here][i].second.second, nm = adj[here][i].second.first;
				if(pm+nm<=m && dist+cost<d[there][pm+nm]) pq.push({{-(d[there][pm+nm] = dist+cost), there}, pm+nm});
			}
		}
		int mn = INF;
		for(int i=0;i<=m;i++)
			mn = min(mn, d[n][i]);
		if(mn==INF) cout << "Poor KCM" << '\n';
		else cout << mn << '\n';
	}	

	return 0;
}