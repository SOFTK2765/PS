#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[21][21];
bool visit[21][21];

int main()
{
    int n;
    scanf("%d", &n);
    int ni, nj;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==9)
            {
                ni = i;
                nj = j;
                a[i][j] = 0;
            }
        }
    int ns = 2, cnt = 0, tmcnt = 0;
    while(1)
    {
        memset(visit, 0, sizeof(visit));
        queue<pair<int, int>> bfs;
        bfs.push({nj, ni});
        visit[ni][nj] = true;
        int mn = 0;
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            vector<pair<int, int>> candidate;
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                if(a[y][x] && a[y][x]<ns)
                {
                    candidate.push_back({y, x});
                    continue;
                }
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=n || ny<0 || ny>=n || visit[ny][nx] || a[ny][nx]>ns) continue;
                    bfs.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
            if(candidate.size())
            {
                sort(candidate.begin(), candidate.end());
                a[ni = candidate[0].first][nj = candidate[0].second] = 0;
                tmcnt += mn;
                cnt++;
                if(cnt==ns)
                {
                    cnt = 0;
                    ns++;
                }
                flag = true;
                break;
            }
            mn++;
        }
        if(!flag)
        {
            printf("%d", tmcnt);
            break;
        }
    }

    return 0;
}