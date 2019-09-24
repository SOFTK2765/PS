#include <bits/stdc++.h>

using namespace std;

bool check[2001][2001];

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    for(int i=y1+1000;i<y2+1000;i++)
        for(int j=x1+1000;j<x2+1000;j++)
            check[i][j] = true;
    for(int i=y3+1000;i<y4+1000;i++)
        for(int j=x3+1000;j<x4+1000;j++)
            check[i][j] = false;
    int mnx = 987654321, mny = 987654321, mxx = -987654321, mxy = -987654321;
    bool flag = false;
    for(int i=0;i<2001;i++)
        for(int j=0;j<2001;j++)
            if(check[i][j])
            {
                flag = true;
                mnx = min(mnx, j-1000);
                mny = min(mny, i-1000);
                mxx = max(mxx, j-1000);
                mxy = max(mxy, i-1000);
            }
    printf("%d", flag?(mxx-mnx+1)*(mxy-mny+1):0);

    return 0;
}