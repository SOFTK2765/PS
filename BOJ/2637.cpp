#include <bits/stdc++.h>

using namespace std;

int cnt[101];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	vector<vector<pair<int, int>>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int x, y, k;
		scanf(" %d %d %d", &x, &y, &k);
		adj[y].push_back({x, k});
		cnt[x]++;
	}
	queue<pair<int, vector<int>>> q;
	for(int i=1;i<=n;i++)
		if(cnt[i]==0)
		{
			vector<int> tmp(n);
			tmp[i] = 1;
			q.push({i, tmp});
		}
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		int adjsize = adj[x].size();
		for(int i=0;i<adjsize;i++)
		{
			
			if(--cnt[adj[x][i].first]==0)
		}
	}

	return 0;
}