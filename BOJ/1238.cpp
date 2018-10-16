#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int n, m, x;

vector<pair<int, int>> adj[1001];

int dijk(int tn)
{
    vector<int> d1(n+1, INF);
    d1[tn] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, tn});
    while(!pq.empty())
    {
        int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
        pq.pop();
        for(int i=0;i<size;i++)
        {
            int there = adj[here][i].first, cost = adj[here][i].second;
            if(dist+cost<d1[there])
            {
                d1[there] = dist+cost;
                pq.push({-d1[there], there});
            }
        }
    }
    vector<int> d2(n+1, INF);
    d2[x] = 0;
    pq.push({0, x});
    while(!pq.empty())
    {
        int here = pq.top().second, dist = -pq.top().first, size = adj[here].size();
        pq.pop();
        for(int i=0;i<size;i++)
        {
            int there = adj[here][i].first, cost = adj[here][i].second;
            if(dist+cost<d2[there])
            {
                d2[there] = dist+cost;
                pq.push({-d2[there], there});
            }
        }
    }
    return d1[x]+d2[tn];
}

int main()
{
    scanf("%d %d %d", &n, &m, &x);
    for(int i=0;i<m;i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        adj[a].push_back({b, c});
    }
    int res = 0;
    for(int i=1;i<=n;i++)
        res = max(res, dijk(i));
    printf("%d", res);

    return 0;
}