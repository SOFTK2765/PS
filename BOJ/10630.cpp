#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

bool visit[2][1001];

int main()
{
	int t;
	cin >> t;
	for(int tc=1;tc<=t;tc++)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<pair<int, int>>> adj(n+1), radj(n+1);
		for(int i=0;i<m;i++)
		{
			int tmp1, tmp2, c;
			cin >> tmp1 >> tmp2 >> c;
			adj[tmp1].push_back({tmp2, c});
			radj[tmp2].push_back({tmp1, c});
		}
		memset(visit, 0, sizeof(visit));
		queue<int> bfs;
		bfs.push(0);
		visit[0][0] = false;
		while(!bfs.empty())
		{
			int size = bfs.size();
			while(size--)
			{
				int here = bfs.front(), adjsize = adj[here].size();
				bfs.pop();
				for(int i=0;i<adjsize;i++)
				{
					int there = adj[here][i].first;
					if(visit[0][there]) continue;
					visit[0][there] = true;
					bfs.push(there);
				}
			}
		}
		bfs.push(0);
		visit[1][0] = false;
		while(!bfs.empty())
		{
			int size = bfs.size();
			while(size--)
			{
				int here = bfs.front(), radjsize = radj[here].size();
				bfs.pop();
				for(int i=0;i<radjsize;i++)
				{
					int there = radj[here][i].first;
					if(visit[1][there]) continue;
					visit[1][there] = true;
					bfs.push(there);
				}
			}
		}
		vector<int> d(n+1, INF);
		d[0] = 0;
		bool flag = false;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				int size = adj[j].size();
				for(int k=0;k<size;k++)
				{
					int there = adj[j][k].first, cost = adj[j][k].second;
					if(visit[0][j] && visit[1][j] && visit[0][there] && visit[1][there] && d[j]!=INF && d[j]+cost<d[there])
					{
						d[there] = d[j]+cost;
						if(i==n-1) flag = true;
					}
				}
			}
		cout << "Case #" << tc << ": " << (flag?"possible":"not possible") << '\n';
	}

	return 0;
}