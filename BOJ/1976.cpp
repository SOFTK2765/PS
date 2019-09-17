#include <bits/stdc++.h>

using namespace std;

int a[201][201];

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
    DisjointSet ds(n+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(tmp) ds.merge(ds.find(i), ds.find(j));
        }
    int vtmp = 0;
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(vtmp!=0 && vtmp!=ds.find(tmp))
        {
            printf("NO");
            return 0;
        }
        else vtmp = ds.find(tmp);
    }
    printf("YES");

    return 0;
}