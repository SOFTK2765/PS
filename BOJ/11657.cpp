#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({b, c});
	}
	vector<int> d(n+1, INF);
	d[1] = 0;
	bool flag = false;
	for(int i=0;i<n;i++)
		for(int j=1;j<=n;j++)
		{
			int size = adj[j].size();
			for(int k=0;k<size;k++)
			{
				int there = adj[j][k].first, cost = adj[j][k].second;
				if(d[j]!=INF && d[j]+cost<d[there])
				{
					d[there] = d[j]+cost;
					if(i==n-1) flag = true;
				}
			}
		}
	if(flag) cout << -1;
	else for(int i=2;i<=n;i++) cout << (d[i]==INF?-1:d[i]) << '\n';

	return 0;
}