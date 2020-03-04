#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int a[11][11], g[11][11], vsize[11][11];
vector<pair<int, bool>> v[11][11];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            g[i][j] = 5;
        }
    for(int i=0;i<m;i++)
    {
        int x, y, z;
        scanf(" %d %d %d", &x, &y, &z);
        v[x-1][y-1].push_back({z, true});
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            sort(v[i][j].begin(), v[i][j].end());
            vsize[i][j] = v[i][j].size();
        }
    while(k--)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<vsize[i][j];k++)
                {
                    if(g[i][j]>=v[i][j][k].first) g[i][j] -= v[i][j][k].first++;
                    else v[i][j][k].second = false;
                }
                int tmp = 0;
                for(int k=0;k<vsize[i][j];k++)
                    if(!v[i][j][k].second)
                    {
                        g[i][j] += v[i][j][k].first/2;
                        tmp++;
                    }
                for(int k=0;k<tmp;k++)
                    v[i][j].pop_back();
                vsize[i][j] -= tmp;
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<vsize[i][j];k++)
                    if(v[i][j][k].first%5==0)
                        for(int k=0;k<8;k++)
                        {
                            int nx = j+dx[k], ny = i+dy[k];
                            if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                            v[ny][nx].push_back({1, true});
                            vsize[ny][nx]++;
                        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                sort(v[i][j].begin(), v[i][j].end());
                g[i][j] += a[i][j];
            }
    }
    int sum = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            sum += vsize[i][j];
    printf("%d", sum);

    return 0;
}