#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[1001][1001], dp[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %1d", &a[i][j]);
    queue<pair<pair<int, int>, bool>> bfs;
    bfs.push({{0, 0}, false});
    int cnt = dp[0][0] = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second, ch = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]!=0 || dp[ny][nx]<=cnt)
            }
        }
    }

    return 0;
}