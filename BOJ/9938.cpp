#include <bits/stdc++.h>

using namespace std;

class DisjointSet
{
public:
    vector<int> parent, rank, bottle, bsize;
    DisjointSet(int n) : parent(n), rank(n, 1), bottle(n), bsize(n, 1)
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
        bottle[v] += bottle[u];
        bsize[v] += bsize[u];
    }
};

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    DisjointSet ds(l+1);
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        int ap = ds.find(a), bp = ds.find(b);
        bool flag = false;
        if(ds.bottle[ap]==0) ds.bottle[ap]++;
        else if(ds.bottle[bp]==0) ds.bottle[bp]++;
        else if(ds.bsize[ap]>ds.bottle[ap]) ds.bottle[ap]++;
        else if(ds.bsize[bp]>ds.bottle[bp]) ds.bottle[bp]++;
        else
        {
            flag = true;
            printf("SMECE\n");
        }
        if(!flag) printf("LADICA\n");
        ds.merge(ap, bp);
    }

    return 0;
}