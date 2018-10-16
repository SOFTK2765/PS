#include <bits/stdc++.h>

using namespace std;

bool check[201] = {};
bool visit[201][201][201] = {};

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    queue<pair<int, pair<int, int>>> bfs;
    bfs.push({0, {0, c}});
    check[c] = true;
    visit[0][0][c] = true;

    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            printf("sss");
            int na = bfs.front().first;
            int nb = bfs.front().second.first;
            int nc = bfs.front().second.second;
            bfs.pop();
            if(na!=0 && nb!=b)
            {
                if(na<=b-nb && !visit[0][nb+na][nc])
                {
                    check[nc] = true;
                    visit[0][nb+na][nc] = true;
                    bfs.push({0, {nb+na, nc}});
                }
                else
                {
                    check[nc] = true;
                    visit[na+nb-b][b][nc] = true;
                    bfs.push({na+nb-b, {b, nc}});
                }
            }
            if(na!=0 && nc!=c)
            {
                if(na<=c-nc && !visit[0][nb][nc+na])
                {
                    check[nc+na] = true;
                    visit[0][nb][nc+na] = true;
                    bfs.push({0, {nb, nc+na}});
                }
                else
                {
                    check[c] = true;
                    visit[na+nc-c][nb][c] = true;
                    bfs.push({na+nc-c, {nb, c}});
                }
            }
            if(nb!=0 && na!=a)
            {
                if(nb<=a-na && !visit[na+nb][0][nc])
                {
                    check[nc] = true;
                    visit[na+nb][0][nc] = true;
                    bfs.push({na+nb, {0, nc}});
                }
                else
                {
                    check[nc] = true;
                    visit[a][nb+na-a][nc] = true;
                    bfs.push({a, {nb+na-a, nc}});
                }
                
            }
            if(nb!=0 && nc!=c)
            {
                if(nb<=c-nc && !visit[na][0][nc+nb])
                {
                    check[nc+nb] = true;
                    visit[na][0][nc+nb] = true;
                    bfs.push({na, {0, nc+nb}});
                }
                else
                {
                    check[c] = true;
                    visit[na][nb+nc-c][c] = true;
                    bfs.push({na, {nb+nc-c, c}});
                }
            }
            if(nc!=0 && na!=a)
            {
                if(nc<=a-na && !visit[na+nc][nb][0])
                {
                    check[0] = true;
                    visit[na+nc][nb][0] = true;
                    bfs.push({na+nc, {nb, 0}});
                }
                else
                {
                    check[nc+na-a] = true;
                    visit[a][nb][nc+na-a] = true;
                    bfs.push({a, {nb, nc+na-a}});
                }
            }
            if(nc!=0 && nb!=b)
            {
                if(nc<=b-nb && !visit[na][nb+nc][0])
                {
                    check[0] = true;
                    visit[na][nb+nc][0] = true;
                    bfs.push({na, {nb+nc, 0}});
                }
                else
                {
                    check[nc+nb-b] = true;
                    visit[na][b][nc+nb-b] = true;
                    bfs.push({na, {b, nc+nb-b}});
                }
            }
        }
    }
    for(int i=0;i<201;i++)
        if(check[i]) printf("%d ", i);

    return 0;
}