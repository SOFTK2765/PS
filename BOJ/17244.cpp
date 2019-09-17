#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool visit[32][51][51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    pair<int, int> s, e;
    for(int i=0;i<m;i++)
        scanf(" %s", a[i]);
    map<pair<int, int>, unsigned char> mp;
    int tmp = 1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='S')
            {
                s.first = j;
                s.second = i;
            }
            else if(a[i][j]=='E')
            {
                e.first = j;
                e.second = i;
            }
            else if(a[i][j]=='X')
            {
                mp[{j, i}] = tmp;
                tmp *= 2;
            }
    queue<pair<pair<int, int>, unsigned char>> bfs;
    bfs.push({{s.first, s.second}, 0});
    visit[0][s.second][s.first] = true;
    int mcnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second;
            unsigned char stuff = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                unsigned char nstuff = stuff;
                if(nx<0 || nx>=n || ny<0 || ny>=m || a[ny][nx]=='#' || visit[nstuff][ny][nx]) continue;
                if(a[ny][nx]=='X' && !(nstuff&mp[{nx, ny}])) nstuff += mp[{nx, ny}];
                if(nx==e.first && ny==e.second && nstuff==tmp-1)
                {
                    printf("%d", mcnt+1);
                    return 0;
                }
                bfs.push({{nx, ny}, nstuff});
                visit[nstuff][ny][nx] = true;
            }
        }
        mcnt++;
    }

    return 0;
}