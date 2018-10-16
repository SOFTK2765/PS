#include <bits/stdc++.h>

using namespace std;

bool check[201] = {};
bool visit[201][201][201] = {};

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    queue<pair<int, pair<int, int> > > bfs;
    bfs.push({0, {0, c}});
    check[c] = true;
    visit[0][0][c] = true;
	int k = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int na = bfs.front().first;
            int nb = bfs.front().second.first;
            int nc = bfs.front().second.second;
            bfs.pop();
            if(na!=0 && nb!=b && (na<=b-nb?(!visit[0][nb+na][nc]):(!visit[na+nb-b][b][nc])))
            {
                if(na<=b-nb) check[nc] = true;
                (na<=b-nb?visit[0][nb+na][nc]:visit[na+nb-b][b][nc]) = true;
                na<=b-nb?bfs.push({0, {nb+na, nc}}):bfs.push({na+nb-b, {b, nc}});
            }
            if(na!=0 && nc!=c && (na<=c-nc?(!visit[0][nb][nc+na]):(!visit[na+nc-c][nb][c])))
            {
                if(na<=c-nc) check[nc+na] = true;
                (na<=c-nc?visit[0][nb][nc+na]:visit[na+nc-c][nb][c]) = true;
                na<=c-nc?bfs.push({0, {nb, nc+na}}):bfs.push({na+nc-c, {nb, c}});
            }
            if(nb!=0 && na!=a && (nb<=a-na?(!visit[na+nb][0][nc]):(!visit[a][nb+na-a][nc])))
            {
                (nb<=a-na?visit[na+nb][0][nc]:visit[a][nb+na-a][nc]) = true;
                nb<=a-na?bfs.push({na+nb, {0, nc}}):bfs.push({a, {nb+na-a, nc}});
            }
            if(nb!=0 && nc!=c && (nb<=c-nc?(!visit[na][0][nc+nb]):(!visit[na][nb+nc-c][c])))
            {
                if(na==0) (nb<=c-nc?check[nc+nb]:check[c]) = true;
                (nb<=c-nc?visit[na][0][nc+nb]:visit[na][nb+nc-c][c]) = true;
                nb<=c-nc?bfs.push({na, {0, nc+nb}}):bfs.push({na, {nb+nc-c, c}});
            }
            if(nc!=0 && na!=a && (nc<=a-na?(!visit[na+nc][nb][0]):(!visit[a][nb][nc+na-a])))
            {
                (nc<=a-na?visit[na+nc][nb][0]:visit[a][nb][nc+na-a]) = true;
                nc<=a-na?bfs.push({na+nc, {nb, 0}}):bfs.push({a, {nb, nc+na-a}});
            }
            if(nc!=0 && nb!=b && (nc<=b-nb?(!visit[na][nb+nc][0]):(!visit[na][b][nc+nb-b])))
            {
                if(na==0) (nc<=b-nb?check[0]:check[nc+nb-b]) = true;
                (nc<=b-nb?visit[na][nb+nc][0]:visit[na][b][nc+nb-b]) = true;
                nc<=b-nb?bfs.push({na, {nb+nc, 0}}):bfs.push({na, {b, nc+nb-b}});
            }
        }
    }
    for(int i=0;i<201;i++)
        if(check[i]) printf("%d ", i);

    return 0;
}