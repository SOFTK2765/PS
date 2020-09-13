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

pair<double, double> a[501];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, s;
		scanf(" %d %d", &n, &s);
		for(int i=0;i<s;i++)
			scanf(" %lf %lf", &a[i].first, &a[i].second);
		vector<pair<double, pair<int, int>>> v;
		for(int i=0;i<s;i++)
			for(int j=0;j<s;j++)
				v.push_back({sqrt((a[i].first-a[j].first)*(a[i].first-a[j].first)+(a[i].second-a[j].second)*(a[i].second-a[j].second)), {i, j}});
		sort(v.begin(), v.end());
		DisjointSet ds(s);
		int cnt = 0;
		for(int i=0;i<s*s;i++)
			if(ds.find(v[i].second.first)!=ds.find(v[i].second.second))
			{
				if(++cnt==s-n)
				{
					printf("%.2lf\n", v[i].first);
					break;
				}
				ds.merge(v[i].second.first, v[i].second.second);
			}
	}

	return 0;
}