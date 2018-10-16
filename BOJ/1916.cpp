#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int n, m, s, e;

vector<pair<int, int>> adj[1001];

void dijk()
{
    vector<int> d(n+1, INF);
    d[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, s});
    while(!pq.empty())
    {
        int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
        pq.pop();
        for(int i=0;i<size;i++)
        {
            int there = adj[here][i].first, cost = adj[here][i].second;
            if(dist+cost<d[there])
            {
                d[there] = dist+cost;
                pq.push({-d[there], there});
            }
        }
    }
    printf("%d", d[e]);
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        adj[a].push_back({b, c});
    }
    scanf(" %d %d", &s, &e);
    dijk();

    return 0;
}