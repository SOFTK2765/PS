#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[51][51], b[51][51];

int main()
{
    int r, c, t;
    scanf("%d %d %d", &r, &c, &t);
    vector<pair<int, int>> af;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==-1) af.push_back({i, j});
        }
    while(t--)
    {
        memset(b, 0, sizeof(b));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(a[i][j]!=0 && a[i][j]!=-1)
                    for(int k=0;k<4;k++)
                    {
                        int nx = j+dx[k], ny = i+dy[k];
                        if(nx<0 || nx>=c || ny<0 || ny>=r || a[ny][nx]==-1) continue;
                        b[ny][nx] += a[i][j]/5;
                        b[i][j] -= a[i][j]/5;
                    }
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(a[i][j]!=-1) a[i][j] += b[i][j];
        int posx = af[0].second, posy = af[0].first;
        while(--posy>0) a[posy][posx] = a[posy-1][posx];
        while(posx++<c-1) a[posy][posx-1] = a[posy][posx];
        posx--;
        while(posy++<af[0].first) a[posy-1][posx] = a[posy][posx];
        posy--;
        while(posx-->1) a[posy][posx+1] = a[posy][posx];
        posx++;
        a[posy][posx] = 0;
        posx = af[1].second, posy = af[1].first;
        while(++posy<r-1) a[posy][posx] = a[posy+1][posx];
        while(posx++<c-1) a[posy][posx-1] = a[posy][posx];
        posx--;
        while(posy-->af[1].first) a[posy+1][posx] = a[posy][posx];
        posy++;
        while(posx-->1) a[posy][posx+1] = a[posy][posx];
        posx++;
        a[posy][posx] = 0;
    }
    int sum = 2;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            sum += a[i][j];
    printf("%d", sum);

    return 0;
}