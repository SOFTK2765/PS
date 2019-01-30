#include <bits/stdc++.h>

#define INF 98764321

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int n;
int a[126][126], d[126][126];

void dijk()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            d[i][j] = INF;
    d[0][0] = a[0][0];
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({-a[0][0], {0, 0}});
    while(!pq.empty())
    {
        int x = pq.top().second.first, y = pq.top().second.second, dist = -pq.top().first;
        pq.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i], ny = y+dy[i];
            if(nx<0 || ny<0 || nx>=n || ny>=n || dist+a[ny][nx]>=d[ny][nx]) continue;
            pq.push({-(dist+a[ny][nx]), {nx, ny}});
            d[ny][nx] = dist+a[ny][nx];
        }
    }
}

int main()
{
    int t = 0;
    while(++t)
    {
        scanf("%d", &n);
        if(n==0) break;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf(" %d", &a[i][j]);
        dijk();
        printf("Problem %d: %d\n", t, d[n-1][n-1]);
    }

    return 0;
}