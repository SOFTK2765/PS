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

pair<double, double> a[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %lf %lf", &a[i].first, &a[i].second);
	vector<pair<double, pair<int, int>>> v;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			v.push_back({sqrt((a[i].first-a[j].first)*(a[i].first-a[j].first)+(a[i].second-a[j].second)*(a[i].second-a[j].second)), {i, j}});
	sort(v.begin(), v.end());
	DisjointSet ds(n);
	double sum = 0;
	for(int i=0;i<n*n;i++)
		if(ds.find(v[i].second.first)!=ds.find(v[i].second.second))
		{
			sum += v[i].first;
			ds.merge(v[i].second.first, v[i].second.second);
		}
	printf("%lf\n", sum);

	return 0;
}