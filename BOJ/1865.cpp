#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, w;
		scanf(" %d %d %d", &n, &m, &w);
		vector<vector<pair<int, int>>> adj(n+1);
		for(int i=0;i<m;i++)
		{
			int tmp1, tmp2, tmp3;
			scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
			adj[tmp1].push_back({tmp2, tmp3});
			adj[tmp2].push_back({tmp1, tmp3});
		}
		for(int i=0;i<w;i++)
		{
			int tmp1, tmp2, tmp3;
			scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
			adj[tmp1].push_back({tmp2, -tmp3});
		}
		bool flag = false;
		vector<int> d(n+1, INF);
		for(int s=1;s<=n;s++)
			if(d[s]==INF)
			{
				d[s] = 0;
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
			}
		printf("%s\n", flag?"YES":"NO");
	}

	return 0;
}