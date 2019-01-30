#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int n;
vector<pair<int, int>> adj[801];

int dijk(int s, int e)
{
    priority_queue<pair<int, int>> pq;
    pq.push({0, s});
    vector<int> d(n+1, INF);
    d[s] = 0;
    while(!pq.empty())
    {
        int h = pq.top().second, dist = -pq.top().first;
        pq.pop();
        for(vector<pair<int, int>>::iterator it=adj[h].begin();it!=adj[h].end();it++)
        {
            int there = (*it).first, cost = (*it).second;
            if(dist+cost>d[there]) continue;
            pq.push({-(dist+cost), there});
            d[there] = dist+cost;
        }
    }
    return d[e];
}

int main()
{
    int e;
    scanf("%d %d", &n, &e);
    for(int i=0;i<e;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    int d1, d2;
    scanf(" %d %d", &d1, &d2);
    long long res = min(0LL+dijk(1, d1)+dijk(d1, d2)+dijk(d2, n), 0LL+dijk(1, d2)+dijk(d2, d1)+dijk(d1, n));
    printf("%lld", res>=INF?-1:res);

    return 0;
}