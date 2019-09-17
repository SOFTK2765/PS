#include <bits/stdc++.h>

using namespace std;

class DisjointSet
{
public:
    vector<int> parent;
    DisjointSet(int n) : parent(n)
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
        if(parent[u]<parent[v]) swap(u, v);
        parent[u] = v;
    }
};

int main()
{
    int g, p;
    scanf("%d %d", &g, &p);
    DisjointSet ds(g+1);
    for(int i=0;i<p;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(ds.find(tmp)==0)
        {
            printf("%d", i);
            return 0;
        }
        ds.merge(ds.find(tmp), ds.find(ds.find(tmp)-1));
    }
    printf("%d", p);

    return 0;
}