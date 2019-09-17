#include <bits/stdc++.h>

using namespace std;

class DisjointSet
{
public:
    vector<int> parent, d;
    DisjointSet(int n) : parent(n), d(n, 0)
    {
        for(int i=0;i<n;i++)
            parent[i] = i;
    }
    int find(int u)
    {
        if(u==parent[u]) return u;
        int res = find(parent[u]);
        d[u] += d[parent[u]];
        return parent[u] = res;
    }
    void merge(int u, int v)
    {
        d[u] = abs(u-v)%1000;
        if(u==v) return;
        parent[u] = v;
    }
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        DisjointSet ds(n+1);
        while(1)
        {
            char o;
            scanf(" %c", &o);
            int tmp1, tmp2;
            if(o=='E')
            {
                scanf(" %d", &tmp1);
                ds.find(tmp1);
                printf("%d\n", ds.d[tmp1]);
            }
            else if(o=='I')
            {
                scanf(" %d %d", &tmp1, &tmp2);
                ds.merge(tmp1, tmp2);
            }
            else if(o=='O') break;
        }
    }

    return 0;
}