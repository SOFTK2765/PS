#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 1, 2, 2, 1, -1, -2, -2};
const int dy[] = {2, 2, 1, -1, -2, -2, -1, 1};

bool visit[301][301];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=0;tc<t;tc++)
    {
        int l;
        pair<int, int> s, e;
        scanf(" %d %d %d %d %d", &l, &s.first, &s.second, &e.first, &e.second);
        memset(visit, 0, sizeof(visit));
        queue<pair<int, int>> bfs;
        bfs.push({s.first, s.second});
        visit[s.second][s.first] = true;
        int cnt = 0;
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                if(x==e.first && y==e.second)
                {
                    flag = true;
                    break;
                }
                for(int i=0;i<8;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=l || ny<0 || ny>=l || visit[ny][nx]) continue;
                    bfs.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
            if(flag) break;
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}