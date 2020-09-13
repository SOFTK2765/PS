#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[101];
bool check[101];
bool visit[101][2];

int main()
{
	int n, s, e, m;
	scanf("%d %d %d %d", &n, &s, &e, &m);
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2, tmp3;
		scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
		adj[tmp1].push_back({tmp2, tmp3});
	}
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	vector<long long> d(n+1, INF);
	d[s] = -a[s];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			int size = adj[j].size();
			for(int k=0;k<size;k++)
			{
				long long there = adj[j][k].first, cost = adj[j][k].second-a[there];
				if(d[j]!=INF && d[j]+cost<d[there])
				{
					d[there] = d[j]+cost;
					if(i==n-1) check[there] = true;
				}
			}
		}
	queue<pair<int, bool>> bfs;
	bfs.push({s, check[s]});
	visit[s][check[s]] = true;
	bool flag = false, aflag = false;
	while(!bfs.empty())
	{
		int size = bfs.size();
		while(size--)
		{
			int here = bfs.front().first, adjsize = adj[here].size();
			bool ncheck = bfs.front().second;
			if(here==e)
			{
				aflag = true;
				if(ncheck) flag = true;
			}
			bfs.pop();
			for(int i=0;i<adjsize;i++)
			{
				int there = adj[here][i].first;
				if(visit[there][ncheck]) continue;
				bfs.push({there, ncheck || check[there]});
				visit[there][ncheck || check[there]] = true;
			}
		}
	}
	if(!aflag) printf("gg");
	else if(flag) printf("Gee");
	else printf("%lld", -d[e]);

	return 0;
}