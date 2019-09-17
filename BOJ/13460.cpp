#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[11][11];
bool visit[1011][1011];

class b
{
    public:
        int rx, ry, bx, by;
        b(int a, int b, int c, int d) :rx(a), ry(b), bx(c), by(d) {}
};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    int rx, ry, bx, by, ox, oy;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]=='R')
            {
                rx = j;
                ry = i;
            }
            else if(a[i][j]=='B')
            {
                bx = j;
                by = i;
            }
            else if(a[i][j]=='O')
            {
                ox = j;
                oy = i;
            }
    queue<b> bfs;
    bfs.push(b(rx, ry, bx, by));
    visit[rx*100+ry][bx*100+by] = true;
    int cnt = 1;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int rx = bfs.front().rx, ry = bfs.front().ry, bx = bfs.front().bx, by = bfs.front().by;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nrx = rx, nry = ry, nbx = bx, nby = by;
                bool rflag = false, bflag = false;
                while(a[nry+dy[i]][nrx+dx[i]]!='#')
                {
                    nrx += dx[i];
                    nry += dy[i];
                    if(a[nry][nrx]=='O') rflag = true;
                }
                while(a[nby+dy[i]][nbx+dx[i]]!='#')
                {
                    nbx += dx[i];
                    nby += dy[i];
                    if(a[nby][nbx]=='O') bflag = true;
                }
                if(!bflag && rflag)
                {
                    printf("%d", cnt);
                    return 0;
                }
                if(nrx==nbx && nry==nby)
                {
                    if(abs(nbx-bx)+abs(nby-by)<abs(nrx-rx)+abs(nry-ry))
                    {
                        nrx -= dx[i];
                        nry -= dy[i];
                    }
                    else
                    {
                        nbx -= dx[i];
                        nby -= dy[i];
                    }
                }
                if(visit[nrx*100+nry][nbx*100+nby] || bflag) continue;
                visit[nrx*100+nry][nbx*100+nby] = true;
                bfs.push(b(nrx, nry, nbx, nby));
            }
        }
        cnt++;
        if(cnt==11) break;
    }
    printf("-1");

    return 0;
}