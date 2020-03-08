#include <bits/stdc++.h>

#define INF 123987654321

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, long long>>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        long long c;
        cin >> tmp1 >> tmp2 >> c;
        adj[tmp1].push_back({tmp2, c});
        adj[tmp2].push_back({tmp1, c});
    }
    priority_queue<pair<pair<long long, int>, int>> pq;
    vector<vector<long long>> d(k+1, vector<long long>(n+1, INF));
    pq.push({{d[k][1] = 0, 1}, k});
    while(!pq.empty())
    {
    	long long dist = -pq.top().first.first;
        int here = pq.top().first.second, size = adj[here].size(), chance = pq.top().second;
        pq.pop();
        for(int i=0;i<size;i++)
        {
            int there = adj[here][i].first;
            long long cost = adj[here][i].second;
            if(dist+cost<d[chance][there]) pq.push({{-(d[chance][there] = dist+cost), there}, chance});
            if(chance>0 && dist<d[chance-1][there]) pq.push({{-(d[chance-1][there] = dist), there}, chance-1});
        }
    }
    long long mn = INF;
	for(int i=0;i<=k;i++)
    	mn = min(mn, d[i][n]);
    cout << mn;

    return 0;
}