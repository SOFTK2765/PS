#include <bits/stdc++.h>

using namespace std;

int a[501], cnt[501], res[501];

int main()
{
	int n;
	scanf("%d", &n);
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		a[i+1] = tmp;
		while(1)
		{
			scanf(" %d", &tmp);
			if(tmp==-1) break;
			adj[tmp].push_back(i+1);
			cnt[i+1]++;
		}
	}
	queue<pair<int, int>> q;
	for(int i=1;i<=n;i++)
		if(cnt[i]==0) q.push({i, a[i]});
	while(!q.empty())
	{
		pair<int, int> x = q.front();
		q.pop();
		res[x.first] = x.second;
		int adjsize = adj[x.first].size();
		for(int i=0;i<adjsize;i++)
		{
			res[adj[x.first][i]] = max(res[adj[x.first][i]], a[adj[x.first][i]]+res[x.first]);
			if(--cnt[adj[x.first][i]]==0) q.push({adj[x.first][i], res[adj[x.first][i]]});
		}
	}
	for(int i=1;i<=n;i++)
		printf("%d\n", res[i]);

	return 0;
}