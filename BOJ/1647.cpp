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
	int n, m;
	scanf("%d %d", &n, &m);
	vector<pair<int, pair<int, int>>> v;
	for(int i=0;i<m;i++)
	{
		int x, y, z;
		scanf(" %d %d %d", &x, &y, &z);
		v.push_back({z, {x, y}});
	}
	sort(v.begin(), v.end());
	DisjointSet ds(n+1);
	int sum = 0, mx = 0;
	for(int i=0;i<m;i++)
		if(ds.find(v[i].second.first)!=ds.find(v[i].second.second))
		{
			mx = max(mx, v[i].first);
			sum += v[i].first;
			ds.merge(v[i].second.first, v[i].second.second);
		}
	printf("%d\n", sum-mx);

	return 0;
}