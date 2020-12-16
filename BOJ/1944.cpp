#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool visit[51][51];

class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(int n) : parent(n), rank(n, 1)
    {
        for(int i=0;i<n;i++)
            parent[i] = i;
    }
    int find(int u)
    {
        if(u==parent[u]) return u;
        return parent[u] = find(parent[u]);
    }
    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u==v) return;
        if(rank[u]>rank[v]) swap(u, v);
        parent[u] = v;
        if(rank[u]==rank[v]) rank[v]++;
    }
};

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		scanf(" %s", a[i]);
	vector<pair<int, int>> v;
	map<pair<int, int>, int> mp;
	int ind = 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]=='S' || a[i][j]=='K')
			{
				v.push_back({j, i});
				mp[{j, i}] = ind++;
			}
	int vsize = m+1;
	priority_queue<tuple<int, int, int>> pq;
	for(int i=0;i<vsize;i++)
	{
		memset(visit, 0, sizeof(visit));
		queue<pair<int, int>> bfs;
		bfs.push({v[i].first, v[i].second});
		visit[v[i].second][v[i].first] = true;
		int cnt = 0;
		while(!bfs.empty())
		{
			int size = bfs.size();
			while(size--)
			{
				int x = bfs.front().first, y = bfs.front().second;
				bfs.pop();
				for(int j=0;j<4;j++)
				{
					int nx = x+dx[j], ny = y+dy[j];
					if(nx<0 || nx>=n || ny<0 || ny>=n || visit[ny][nx] || a[ny][nx]=='1') continue;
					bfs.push({nx, ny});
					visit[ny][nx] = true;
					if(a[ny][nx]=='S' || a[ny][nx]=='K') pq.push({-(cnt+1), mp[{v[i].first, v[i].second}], mp[{nx, ny}]});
				}
			}
			cnt++;
		}
	}
	DisjointSet ds(vsize+1);
    long long sum = 0;
    while(!pq.empty())
    {
        tuple<int, int, int> tmp = pq.top();
        pq.pop();
        if(ds.find(get<1>(tmp))!=ds.find(get<2>(tmp)))
        {
            sum += -get<0>(tmp);
            ds.merge(ds.find(get<1>(tmp)), ds.find(get<2>(tmp)));
        }
    }
    int parent = ds.find(0);
    bool flag = false;
    for(int i=0;i<vsize;i++)
    	if(ds.find(i)!=parent) flag = true;
    printf("%lld", flag?-1:sum);

	return 0;
}