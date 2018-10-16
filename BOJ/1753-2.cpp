#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int v, e, k;

vector<pair<int, int>> adj[20001];

void dijk()
{
    vector<int> d(v+1, INF);
    d[k] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, k});
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
    for(int i=1;i<=v;i++)
        d[i]==INF?printf("INF\n"):printf("%d\n", d[i]);
}

int main()
{
    scanf("%d %d %d", &v, &e, &k);
    for(int i=0;i<e;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        adj[a].push_back({b, c});
    }
    dijk();

    return 0;
}