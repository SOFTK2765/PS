#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, -1, 0, 1};

bool check[101][101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int x, y, d, g;
        scanf(" %d %d %d %d", &x, &y, &d, &g);
        check[y][x] = true;
        vector<int> v;
        v.push_back(d);
        check[y+=dy[d]][x+=dx[d]] = true;
        for(int j=1;j<=g;j++)
        {
            int size = v.size();
            for(int i=size-1;i>=0;i--)
            {
                int nd = (v[i]+1)%4;
                x += dx[nd];
                y += dy[nd];
                check[y][x] = true;
                v.push_back(nd);
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            if(check[i][j] && check[i][j+1] && check[i+1][j] && check[i+1][j+1]) cnt++;
    printf("%d", cnt);

    return 0;
}