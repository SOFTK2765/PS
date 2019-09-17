#include <bits/stdc++.h>

using namespace std;

class DisjointSet
{
public:
    vector<int> parent, rank, fcnt;
    DisjointSet(int n) : parent(n), rank(n, 1), fcnt(n, 1)
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
        fcnt[v] += fcnt[u];
    }
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int f;
        scanf(" %d", &f);
        map<string, int> mp;
        int cnt = 1;
        vector<pair<string, string>> v;
        for(int i=0;i<f;i++)
        {
            string tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if(mp[tmp1]==0) mp[tmp1] = cnt++;
            if(mp[tmp2]==0) mp[tmp2] = cnt++;
            v.push_back({tmp1, tmp2});
        }
        DisjointSet ds(cnt);
        for(int i=0;i<f;i++)
        {
            int p1 = ds.find(mp[v[i].first]), p2 = ds.find(mp[v[i].second]);
            if(p1==p2) printf("%d\n", ds.fcnt[p1]);
            else
            {
                ds.merge(p1, p2);
                printf("%d\n", ds.fcnt[ds.find(p1)]);
            }
        }
    }

    return 0;
}