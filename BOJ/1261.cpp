#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int m, n;
int a[101][101], d[101][101];

void dijk()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            d[i][j] = INF;
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({0, {0, 0}});
    d[0][0] = 0;
    while(!pq.empty())
    {
        int x = pq.top().second.first, y = pq.top().second.second, dist = -pq.top().first;
        pq.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i], ny = y+dy[i], cost = a[ny][nx];
            if(nx<0 || ny<0 || nx>=m || ny>=n || dist+cost>=d[ny][nx]) continue;
            pq.push({-(dist+cost), {nx, ny}});
            d[ny][nx] = dist+cost;
        }
    }
    printf("%d", d[n-1][m-1]);
}

int main()
{
    scanf("%d %d", &m, &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %1d", &a[i][j]);
    dijk();

    return 0;
}