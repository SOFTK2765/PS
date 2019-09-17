#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool visit[110][110];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int b, w;
        scanf(" %d %d", &b, &w);
        bool flag = false;
        for(int i=0;i<109;i++)
        {
            for(int j=0;j<109;j++)
            {
                memset(visit, 0, sizeof(visit));
                queue<pair<int, int>> bfs;
                bfs.push({j, i});
                visit[i][j] = true;
                int bcnt = 0, wcnt = 0;
                if((i+j)%2==0) wcnt++;
                else bcnt++;
                while(!bfs.empty())
                {
                    int size = bfs.size();
                    while(size--)
                    {
                        int x = bfs.front().first, y = bfs.front().second;
                        bfs.pop();
                        for(int k=0;k<4;k++)
                        {
                            int nx = x+dx[k], ny = y+dy[k];
                            if(nx<0 || nx>=109 || ny<0 || ny>=109 || visit[ny][nx]) continue;
                            if((nx+ny)%2==0) wcnt++;
                            else bcnt++;
                            bfs.push({nx, ny});
                            visit[ny][nx] = true;
                            if(wcnt==w && bcnt==b)
                            {
                                flag = true;
                                break;
                            }
                        }
                        if(flag) break;
                    }
                    if(flag) break;
                }
                if(flag)
                {
                    printf("YES\n");
                    for(int k=0;k<109;k++)
                        for(int l=0;l<109;l++)
                            if(visit[k][l]) printf("%d %d\n", l+1, k+1);
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) printf("NO\n");
    }

    return 0;
}