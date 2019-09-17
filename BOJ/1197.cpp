#include <bits/stdc++.h>

using namespace std;

bool visit[10001];

int main()
{
    int v, e;
    scanf("%d %d", &v, &e);
    vector<vector<pair<int, int>>> adj(v+1);
    for(int i=0;i<e;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back({tmp2, tmp3});
        adj[tmp2].push_back({tmp1, tmp3});
    }
    queue<int> q;
    priority_queue<pair<int, int>> pq;
    q.push(1);
    visit[1] = true;
    int sum = 0;
    while(!q.empty())
    {
        int here = q.front();
        q.pop();
        int adjsize = adj[here].size();
        for(int i=0;i<adjsize;i++)
        {
            int there = adj[here][i].first, d = adj[here][i].second;
            if(visit[there]) continue;
            pq.push({-d, there});
        }
        while(!pq.empty())
        {
            int d = -pq.top().first, there = pq.top().second;
            pq.pop();
            if(visit[there]) continue;
            visit[there] = true;
            q.push(there);
            sum += d;
            break;
        }
    }
    printf("%d", sum);

    return 0;
}