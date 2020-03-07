#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

pair<double, double> a[101];

double length(double a, double b, double c, double d){return sqrt((a-c)*(a-c)+(b-d)*(b-d));}

int main()
{
	double xs, ys, xe, ye;
	cin >> xs >> ys >> xe >> ye;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> a[i].first >> a[i].second;
	a[0] = {xs, ys};
	a[n+1] = {xe, ye};
	vector<vector<pair<int, double>>> adj(n+2);
	adj[0].push_back({n+1, length(xs, ys, xe, ye)/5});
	adj[n+1].push_back({0, length(xs, ys, xe, ye)/5});
	for(int i=1;i<=n;i++)
	{
		double tmp = length(xs, ys, a[i].first, a[i].second);
		adj[0].push_back({i, tmp/5});
		adj[i].push_back({0, tmp/5});
		tmp = length(xe, ye, a[i].first, a[i].second);
		adj[n+1].push_back({i, 2+(abs(tmp-50)/5)});
		adj[i].push_back({n+1, 2+(abs(tmp-50)/5)});
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i!=j)
			{
				double tmp = length(a[i].first, a[i].second, a[j].first, a[j].second);
				adj[i].push_back({j, 2+(abs(tmp-50)/5)});
			}
	vector<double> d(n+2, INF);
	priority_queue<pair<double, int>> pq;
	pq.push({d[0] = 0, 0});
	while(!pq.empty())
	{
		int here = pq.top().second, size = adj[here].size();
		double dist = -pq.top().first;
		pq.pop();
		for(int i=0;i<size;i++)
		{
			int there = adj[here][i].first;
			double cost = adj[here][i].second;
			if(dist+cost<d[there]) pq.push({-(d[there] = dist+cost), there});
		}
	}
	cout << d[n+1];

	return 0;
}