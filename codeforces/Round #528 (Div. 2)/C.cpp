#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool visit[3][1002][1002];

int main()
{
    vector<pair<int, pair<int, int>> xy(3);
    for(int i=0;i<3;i++)
        scanf(" %d %d", &xy[i].first, &xy[i].second);
    queue<pair<int, int>> bfs;
    for(int i=0;i<3;i++)
    {
        bfs.push({i, {xy[i].first, xy[i].second}});
        visit[i][xy[i].second][xy[i].first] = true;
    }
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int f = bfs.front().first, x = bfs.front().second.first, y = bfs.front().second.second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>1000 || ny<0 || ny>1000 || visit[f][ny][nx]) continue;
                visit[f][ny][nx] = true;
                if(visit[0][ny][nx] && visit[1][ny][nx] && visit[2][ny][nx])
                    
            }
        }
    }

    return 0;
}