#include <bits/stdc++.h>

using namespace std;

bool check[101][101];

int main()
{
    int cnt = 0;
    for(int i=0;i<4;i++)
    {
        int x1, x2, y1, y2;
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
        for(int i=y1;i<y2;i++)
            for(int j=x1;j<x2;j++)
                if(check[i][j]==false)
                {
                    check[i][j] = true;
                    cnt++;
                }
    }
    printf("%d", cnt);

    return 0;
}