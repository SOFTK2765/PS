#include <bits/stdc++.h>

using namespace std;

int a[100001];

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

    int merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u==v) return u;
        if(rank[u]>rank[v]) swap(u, v);
        parent[u] = v;
        if(rank[u]==rank[v]) rank[v]++;
    }
};

int main()
{
    int n, m;
    scanf(" %d %d", &n, &m);
    DisjointSet ds(n+1);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        int d1 = ds.find(tmp1), d2 = ds.find(tmp2), tmp;
        if(d1==d2) tmp = a[d1];
        else
        {
            tmp = a[d1]+a[d2];
            a[d1] = a[d2] = tmp;
            ds.merge(d1, d2);
        }
        printf("%d\n", tmp);
    }


    return 0;
}