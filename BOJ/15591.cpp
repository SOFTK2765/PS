#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0;i<n-1;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back({tmp2, tmp3});
        adj[tmp2].push_back({tmp1, tmp3});
    }
    for(int i=0;i<q;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        vector<int> usado(n+1);
        vector<bool> visit(n+1);
        queue<pair<int, int>> bfs;
        bfs.push({tmp2, 1987654321});
        visit[tmp2] = true;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int pos = bfs.front().first, mn = bfs.front().second;
                bfs.pop();
                for(auto k : adj[pos])
                {
                    if(visit[k.first]) continue;
                    usado[k.first] = min(k.second, mn);
                    visit[k.first] = true;
                    bfs.push({k.first, usado[k.first]});
                }
            }
        }
        int cnt = 0;
        for(int i=1;i<=n;i++)
            if(i!=tmp2 && usado[i]>=tmp1) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}