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
        if(rank[u]==rank[v]) rank[v++];
    }
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int c, n;
        scanf(" %d %d", &c, &n);
        DisjointSet ds(n);
        vector<pair<int, pair<int, int>>> v;
        for(int i=0;i<n;i++)
        {
            int x, y, z;
            scanf(" %d %d %d", &x, &y, &z);
            v.push_back({z, {x, y}});
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for(int i=0;i<n;i++)
            if(ds.find(v[i].second.first)!=ds.find(v[i].second.second))
            {
                ds.merge(v[i].second.first, v[i].second.second);
                sum += v[i].first;
            }
        int tmp = ds.find(0);
        bool flag = false;
        for(int i=0;i<n;i++)
            printf("%d ", ds.parent[i]);
        printf("\n");
        for(int i=0;i<n;i++)
            if(ds.parent[i]!=tmp)
            {
                printf("%s\n", "no");
                flag = true;
                break;
            }
        if(flag) continue;
        printf("%s\n", sum>c?"no":"yes");
    }

    return 0;
}