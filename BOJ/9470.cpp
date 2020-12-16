#include <bits/stdc++.h>

using namespace std;

int cnt[1001];
pair<int, int> sn[1001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int k, m, p;
		scanf(" %d %d %d", &k, &m, &p);
		vector<vector<int>> adj(m+1);
		memset(cnt, 0, sizeof(cnt));
		memset(sn, 0, sizeof(sn));
		for(int i=0;i<p;i++)
		{
			int tmp1, tmp2;
			scanf(" %d %d", &tmp1, &tmp2);
			adj[tmp1].push_back(tmp2);
			cnt[tmp2]++;
		}
		queue<int> q;
		for(int i=1;i<=m;i++)
			if(cnt[i]==0)
			{
				sn[i] = {1, 1};
				q.push(i);
			}
		while(!q.empty())
		{
			int x = q.front();
			q.pop();
			int adjsize = adj[x].size();
			for(int i=0;i<adjsize;i++)
			{
				if(sn[adj[x][i]].first==sn[x].first)
				{
					if(sn[adj[x][i]].second==0) sn[adj[x][i]].second = 1;
					else sn[adj[x][i]] = {sn[x].first+1, 0};
				}
				else if(sn[adj[x][i]].first<sn[x].first) sn[adj[x][i]] = {sn[x].first, 1};
				if(--cnt[adj[x][i] ]==0) q.push(adj[x][i]);
			}
		}
		printf("%d %d\n", k, sn[m].first);
	}

	return 0;
}