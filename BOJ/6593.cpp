#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0, 0, 0};
const int dy[] = {0, 0, 1, -1, 0, 0};
const int dz[] = {0, 0, 0, 0, 1, -1};

char a[31][31][31];
bool visit[31][31][31];

int main()
{
    while(1)
    {
        int l, r, c;
        scanf("%d %d %d", &l, &r, &c);
        if(l==0 && r==0 && c==0) break;
        memset(visit, 0, sizeof(visit));
        int sl, sr, sc, el, er, ec;
        for(int i=0;i<l;i++)
            for(int j=0;j<r;j++)
                scanf(" %s", a[i][j]);
        for(int i=0;i<l;i++)
            for(int j=0;j<r;j++)
                for(int k=0;k<c;k++)
                    if(a[i][j][k]=='S')
                    {
                        sl = i;
                        sr = j;
                        sc = k;
                    }
                    else if(a[i][j][k]=='E')
                    {
                        el = i;
                        er = j;
                        ec = k;
                    }
        queue<tuple<int, int, int>> bfs;
        bfs.push(make_tuple(sl, sr, sc));
        visit[sl][sr][sc] = true;
        int cnt = 0;
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = get<0>(bfs.front()), y = get<1>(bfs.front()), z = get<2>(bfs.front());
                bfs.pop();
                if(x==el && y==er && z==ec)
                {
                    printf("Escaped in %d minute(s).\n", cnt);
                    flag = true;
                    break;
                }
                for(int i=0;i<6;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i], nz = z+dz[i];
                    if(nx<0 || nx>=l || ny<0 || ny>=r || nz<0 || nz>=c || visit[nx][ny][nz] || a[nx][ny][nz]=='#') continue;
                    visit[nx][ny][nz] = true;
                    bfs.push(make_tuple(nx, ny, nz));
                }
            }
            cnt++;
            if(flag) break;
        }
        if(flag) continue;
        printf("Trapped!\n");
    }

    return 0;
}