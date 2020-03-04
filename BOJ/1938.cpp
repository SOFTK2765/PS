#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool visit[51][51][2]; 

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s ", a[i]);
    vector<pair<int, int>> bv;
    int vtc = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='B') bv.push_back({j, i});
    if(bv[0].first==bv[1].first) vtc = 1;
    queue<pair<pair<int, int>, int>> bfs;
    bfs.push({{bv[1].first, bv[1].second}, vtc});
    visit[bv[1].second][bv[1].first][vtc] = true;
    int cnt = 0;
    bool flag = false;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second, vtc = bfs.front().second;
            bfs.pop();
            if(vtc)
            {
                if(a[y][x]=='E' && a[y-1][x]=='E' && a[y+1][x]=='E')
                {
                    flag = true;
                    break;
                }
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=n || ny-1<0 || ny+1>=n || a[ny][nx]=='1' || a[ny-1][nx]=='1' || a[ny+1][nx]=='1' || visit[ny][nx][vtc]) continue;
                    bfs.push({{nx, ny}, vtc});
                    visit[ny][nx][vtc] = true;
                }
                if(x-1>=0 && x+1<n && y-1>=0 && y+1<n && a[y-1][x-1]!='1' && a[y-1][x]!='1' && a[y-1][x+1]!='1' && a[y][x-1]!='1' && a[y][x+1]!='1' && a[y+1][x-1]!='1' && a[y+1][x]!='1' && a[y+1][x+1]!='1' && !visit[y][x][0])
                {
                    bfs.push({{x, y}, 0});
                    visit[y][x][0] = true;
                }
            }
            else
            {
                if(a[y][x]=='E' && a[y][x-1]=='E' && a[y][x+1]=='E')
                {
                    flag = true;
                    break;
                }
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx-1<0 || nx+1>=n || ny<0 || ny>=n || a[ny][nx]=='1' || a[ny][nx-1]=='1' || a[ny][nx+1]=='1' || visit[ny][nx][vtc]) continue;
                    bfs.push({{nx, ny}, vtc});
                    visit[ny][nx][vtc] = true;
                }
                if(x-1>=0 && x+1<n && y-1>=0 && y+1<n && a[y-1][x-1]!='1' && a[y-1][x]!='1' && a[y-1][x+1]!='1' && a[y][x-1]!='1' && a[y][x+1]!='1' && a[y+1][x-1]!='1' && a[y+1][x]!='1' && a[y+1][x+1]!='1' && !visit[y][x][1])
                {
                    bfs.push({{x, y}, 1});
                    visit[y][x][1] = true;
                }
            }
        }
        if(flag) break;
        cnt++;
    }
    if(flag) printf("%d", cnt);
    else printf("0");

    return 0;
}