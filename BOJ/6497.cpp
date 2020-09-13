#include <bits/stdc++.h>

using namespace std;

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
	while(1)
	{
		int m, n;
		scanf("%d %d", &m, &n);
		if(m==0 && n==0) break;
		vector<pair<int, pair<int, int>>> v;
		int zsum = 0;
		for(int i=0;i<n;i++)
		{
			int x, y, z;
			scanf(" %d %d %d", &x, &y, &z);
			v.push_back({z, {x, y}});
			zsum += z;
		}
		sort(v.begin(), v.end());
		DisjointSet ds(m);
		int sum = 0;
		for(int i=0;i<n;i++)
			if(ds.find(v[i].second.first)!=ds.find(v[i].second.second))
			{
				sum += v[i].first;
				ds.merge(v[i].second.first, v[i].second.second);
			}
		printf("%d\n", zsum-sum);
	}

	return 0;
}