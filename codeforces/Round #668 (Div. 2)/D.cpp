#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, a, b, da, db;
		scanf(" %d %d %d %d %d", &n, &a, &b, &da, &db);
		vector<vector<int>> adj(n+1);
		for(int i=0;i<n-1;i++)
		{
			int u, v;
			scanf(" %d %d", &u, &v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		queue<int> bfs;
		vector<bool> visit(n+1, false);
		bfs.push(a);
		visit[a] = true;
		int cnt = 0;
		bool alice = false;
		while(!bfs.empty())
		{
			int size = bfs.size();
			while(size--)
			{
				int here = bfs.front();
				bfs.pop();
				if(here==b) alice = true;
				if(cnt==da) continue;
				int adjsize = adj[here].size();
				for(int i=0;i<adjsize;i++)
				{
					int there = adj[here][i];
					if(visit[there]) continue;
					bfs.push(there);
					visit[there] = true;
				}
			}
			cnt++;
		}
		if(alice)
		{
			printf("Alice\n");
			continue;
		}
		queue<int> bfs2;
		vector<bool> visit2(n+1, false);
		bfs2.push(1);
		visit2[1] = true;
		int last = 1;
		while(!bfs2.empty())
		{
			int size = bfs2.size();
			while(size--)
			{
				int here = bfs2.front();
				bfs2.pop();
				last = here;
				int adjsize = adj[here].size();
				for(int i=0;i<adjsize;i++)
				{
					int there = adj[here][i];
					if(visit2[there]) continue;
					bfs2.push(there);
					visit2[there] = true;
				}
			}
		}
		vector<bool> visit3(n+1, false);
		bfs2.push(last);
		visit3[last] = true;
		int diag = 0;
		while(!bfs2.empty())
		{
			int size = bfs2.size();
			while(size--)
			{
				int here = bfs2.front();
				bfs2.pop();
				int adjsize = adj[here].size();
				for(int i=0;i<adjsize;i++)
				{
					int there = adj[here][i];
					if(visit3[there]) continue;
					bfs2.push(there);
					visit3[there] = true;
				}
			}
			diag++;
		}
		if(diag/2<=da) alice = true;
		if(da*2>=db) alice = true;
		printf("%s\n", alice?"Alice":"Bob");
	}

	return 0;
}