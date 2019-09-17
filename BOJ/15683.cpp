#include <bits/stdc++.h>

using namespace std;

const int cs[] = {0, 4, 2, 4, 4, 1};
const int cd[][4][4] = {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}},
                    {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}},
                    {{1, 0, 1, 0}, {0, 1, 0, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}},
                    {{1, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 1, 1}, {1, 0, 0, 1}},
                    {{1, 1, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1}, {1, 0, 1, 1}},
                    {{1, 1, 1, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}};
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};

int a[9][9];
bool check[9][9];
pair<pair<int, int>, pair<int, int>> cctv[9];
int n, m, cnt, zcnt, mn = 987654321;

void f(int pos)
{
    if(pos==cnt)
    {
        int tmpcnt = 0;
        memset(check, 0, sizeof(check));
        for(int i=0;i<pos;i++)
            for(int j=0;j<4;j++)
                if(cd[cctv[i].first.first][cctv[i].first.second][j])
                {
                    int nx = cctv[i].second.first, ny = cctv[i].second.second;
                    while(1)
                    {
                        nx += dx[j];
                        ny += dy[j];
                        if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]==6) break;
                        if(a[ny][nx]==0 && !check[ny][nx]) tmpcnt++;
                        check[ny][nx] = true;
                    }
                }
        mn = min(mn, zcnt-tmpcnt);
        return;
    }
    int size = cs[cctv[pos].first.first];
    for(int i=0;i<size;i++)
    {
        cctv[pos].first.second = i;
        f(pos+1);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(1<=a[i][j] && a[i][j]<=5)
            {
                cctv[cnt].first.first = a[i][j];
                cctv[cnt].second.first = j;
                cctv[cnt++].second.second = i;
            }
            if(a[i][j]!=0) check[i][j] = true;
            else zcnt++;
        }
    f(0);
    printf("%d", mn);

    return 0;
}