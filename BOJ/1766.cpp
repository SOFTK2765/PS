#include <bits/stdc++.h>

using namespace std;

int cnt[32001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	vector<vector<int>> adj(n+1);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2;
		scanf(" %d %d", &tmp1, &tmp2);
		adj[tmp1].push_back(tmp2);
		cnt[tmp2]++;
	}
	priority_queue<int> pq;
	for(int i=1;i<=n;i++)
		if(cnt[i]==0) pq.push(-i);
	while(!pq.empty())
	{
		int x = -pq.top();
		pq.pop();
		printf("%d ", x);
		int adjsize = adj[x].size();
		for(int i=0;i<adjsize;i++)
			if(--cnt[adj[x][i]]==0) pq.push(-adj[x][i]);
	}

	return 0;
}