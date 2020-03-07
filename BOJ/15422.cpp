#include <bits/stdc++.h>

#define INF 1234987654321

using namespace std;

int main()
{
	int n, m, f, s, t;
	cin >> n >> m >> f >> s >> t;
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2, c;
		cin >> tmp1 >> tmp2 >> c;
		adj[tmp1].push_back({tmp2, c});
		adj[tmp2].push_back({tmp1, c});
	}
	for(int i=0;i<f;i++)
	{
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		adj[tmp1].push_back({tmp2, 0});
	}
	vector<long long> d(n+1, INF);
	priority_queue<pair<pair<long long, long long>, bool>> pq;
	pq.push({{0, s}, false});
	d[s] = 0;
	while(!pq.empty())
	{
		long long here = pq.top().first.second, dist = -pq.top().first.first, size = adj[here].size();
		bool ticket = pq.top().second;
		pq.pop();
		for(int i=0;i<size;i++)
		{
			long long there = adj[here][i].first, cost = adj[here][i].second;
			if(cost==0)
			{
				if(ticket) continue;
				else ticket = true;
			}
			if(dist+cost<d[there])
			{
				d[there] = dist+cost;
				pq.push({{-d[there], there}, ticket});
			}
		}
	}
	cout << d[t];

	return 0;
}