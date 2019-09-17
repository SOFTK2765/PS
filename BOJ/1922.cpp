#include <bits/stdc++.h>

using namespace std;

pair<int, pair<int, int>> a[100001];

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
    for(int i=0;i<m;i++)
        scanf(" %d %d %d", &a[i].second.first, &a[i].second.second, &a[i].first);
    sort(a, a+m);
    DisjointSet ds(n+1);
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        if(ds.find(a[i].second.first)!=ds.find(a[i].second.second))
        {
            sum += a[i].first;
            ds.merge(ds.find(a[i].second.first), ds.find(a[i].second.second));
        }
    }
    printf("%d", sum);

    return 0;
}