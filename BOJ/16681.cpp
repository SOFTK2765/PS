#include <bits/stdc++.h>

#define INF 1234987654321

using namespace std;

int h[100001];
bool visit[100001];

int main()
{
	long long n, m, d, e;
	scanf("%lld %lld %lld %lld", &n, &m, &d, &e);
	for(int i=1;i<=n;i++)
		scanf("%d ", &h[i]);
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2, c;
		scanf(" %d %d %d", &tmp1, &tmp2, &c);
		adj[tmp1].push_back({tmp2, c});
		adj[tmp2].push_back({tmp1, c});
	}
	priority_queue<pair<long long, int>> pq;
	vector<long long> d1(n+1, INF);
	pq.push({d1[1] = 0, 1});
	while(!pq.empty())
	{
		int here = pq.top().second, size = adj[here].size();
		long long dist = -pq.top().first;
		pq.pop();
		if(visit[here]) continue;
		visit[here] = true;
		for(int i=0;i<size;i++)
		{
			int there = adj[here][i].first, cost = adj[here][i].second;
			if(h[here]<h[there] && dist+cost<d1[there]) pq.push({-(d1[there] = dist+cost), there});
		}
	}
	memset(visit, 0, sizeof(visit));
	vector<long long> d2(n+1, INF);
	pq.push({d2[n] = 0, n});
	while(!pq.empty())
	{
		int here = pq.top().second, size = adj[here].size();
		long long dist = -pq.top().first;
		pq.pop();
		if(visit[here]) continue;
		visit[here] = true;
		for(int i=0;i<size;i++)
		{
			int there = adj[here][i].first, cost = adj[here][i].second;
			if(h[here]<h[there] && dist+cost<d2[there]) pq.push({-(d2[there] = dist+cost), there});
		}
	}
	long long mx = -INF;
	for(int i=2;i<=n-1;i++)
		if(d1[i]!=INF && d2[i]!=INF) mx = max(mx, h[i]*e-(d1[i]+d2[i])*d);
	if(mx!=-INF) cout << mx;
	else cout << "Impossible";

	return 0;
}