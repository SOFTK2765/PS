#include <bits/stdc++.h>

using namespace std;

int a[1001], cnt[1001], dt[1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        for(int i=1;i<=n;i++)
            cnt[i] = dt[i] = 0;
        for(int i=1;i<=n;i++)
            scanf(" %d", &a[i]);
        vector<vector<int>> adj(n+1);
        for(int i=0;i<k;i++)
        {
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            adj[tmp1].push_back(tmp2);
            cnt[tmp2]++;
        }
        int w;
        scanf(" %d", &w);
        queue<int> q;
        for(int i=1;i<=n;i++)
            if(cnt[i]==0)
            {
                q.push(i);
                dt[i] = a[i];
            }
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int here = q.front();
                q.pop();
                if(here==w) continue;
                int adjsize = adj[here].size();
                for(int i=0;i<adjsize;i++)
                {
                    int there = adj[here][i];
                    dt[there] = max(dt[there], dt[here]+a[there]);
                    if(--cnt[there]==0) q.push(there);
                }
            }
        }
        printf("%d\n", dt[w]);
    }

    return 0;
}