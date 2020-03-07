#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int s[1001];

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2, c;
		cin >> tmp1 >> tmp2 >> c;
		adj[tmp1].push_back({tmp2, c});
		adj[tmp2].push_back({tmp1, c});
	}
	vector<int> d(n+1, INF);
	priority_queue<pair<int, int>> pq;
	pq.push({d[1] = 0, 1});
	while(!pq.empty())
	{
		int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
		pq.pop();
		for(int i=0;i<size;i++)
		{
			int there = adj[here][i].first, cost = adj[here][i].second;
			if(dist+cost<d[there])
			{
				s[there] = here;
				pq.push({-(d[there] = dist+cost), there});
			}
		}
	}
	cout << n-1 << '\n';
	for(int i=2;i<=n;i++)
		cout << i << " " << s[i] << '\n';
	
	return 0;
}