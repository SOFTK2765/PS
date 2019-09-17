#include <bits/stdc++.h>

using namespace std;

bool check[10001];

class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(int n) : parent(n), rank(n)
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
        if(rank[u]<rank[v]) swap(u, v);
        parent[u] = v;
    }
};

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    DisjointSet ds(n+1);
    for(int i=1;i<=n;i++)
        scanf(" %d", &ds.rank[i]);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        ds.merge(ds.find(tmp1), ds.find(tmp2));
    }
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        int cap = ds.find(i);
        if(!check[cap])
        {
            check[cap] = true;
            sum += ds.rank[cap];
        }
    }
    if(sum>k) printf("Oh no");
    else printf("%d", sum);

    return 0;
}