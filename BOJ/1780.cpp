#include <bits/stdc++.h>

using namespace std;

int a[2188][2188];
int cnt[3];

void f(int n, int x, int y)
{
    bool flag = false;
    for(int i=y;i<y+n;i++)
    {
        for(int j=x;j<x+n;j++)
            if(a[i][j]!=a[y][x])
            {
                f(n/3, x, y);
                f(n/3, x+n/3, y);
                f(n/3, x+2*n/3, y);
                f(n/3, x, y+n/3);
                f(n/3, x+n/3, y+n/3);
                f(n/3, x+2*n/3, y+n/3);
                f(n/3, x, y+2*n/3);
                f(n/3, x+n/3, y+2*n/3);
                f(n/3, x+2*n/3, y+2*n/3);
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) cnt[a[y][x]+1]++;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    f(n, 0, 0);
    printf("%d\n%d\n%d", cnt[0], cnt[1], cnt[2]);

    return 0;
}