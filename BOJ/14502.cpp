#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[8][8];
int tmp[8][8];
bool viruscheck[8][8];

vector<pair<int, int>> v;
queue<pair<int, int>> bfs, virus;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==0) v.push_back({i, j});
            else if(a[i][j]==2) virus.push_back({i, j});
        }
    int size = v.size();
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            for(int k=j+1;k<size;k++)
            {
                a[v[i].first][v[i].second] = 1;
                a[v[j].first][v[j].second] = 1;
                a[v[k].first][v[k].second] = 1;
                int virussize = virus.size();
                memset(viruscheck, 0, sizeof(viruscheck));
                for(int l=0;l<virussize;l++)
                {
                    bfs.push_back({virus[l].first, virus[l].second});
                    viruscheck[virus[l].first][virus[l].second] = true;
                }

                a[v[i].first][v[i].second] = 0;
                a[v[j].first][v[j].second] = 0;
                a[v[k].first][v[k].second] = 0;
            }


    return 0;
}