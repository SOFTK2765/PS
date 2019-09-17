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
    DisjointSet ds = DisjointSet(n+1);
    for(int i=0;i<m;i++)
    {
        int tmp, a, b;
        scanf(" %d %d %d", &tmp, &a, &b);
        if(tmp==0) ds.merge(a, b);
        else printf("%s\n", ds.find(a)==ds.find(b)?"YES":"NO");
    }

    return 0;
}
