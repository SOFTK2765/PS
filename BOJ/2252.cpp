#include <bits/stdc++.h>

using namespace std;

int cnt[32001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        cnt[tmp2]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++)
        if(!cnt[i]) q.push(i);
    vector<int> res;
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
            int tmp = q.front();
            q.pop();
            res.push_back(tmp);
            int tmpsize = adj[tmp].size();
            for(int i=0;i<tmpsize;i++)
                if(!(--cnt[adj[tmp][i]])) q.push(adj[tmp][i]);
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ", res[i]);

    return 0;
}