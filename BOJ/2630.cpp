#include <bits/stdc++.h>

using namespace std;

int a[129][129];
int cnt1 = 0, cnt2 = 0;

void f(int x, int y, int n)
{
    int tmp = a[y][x];
    for(int i=y;i<y+n;i++)
        for(int j=x;j<x+n;j++)
            if(a[i][j]!=tmp)
            {
                f(x, y, n/2);
                f(x+n/2, y, n/2);
                f(x, y+n/2, n/2);
                f(x+n/2, y+n/2, n/2);
                return;
            }
    if(tmp==0) cnt1++;
    else cnt2++;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    f(0, 0, n);
    printf("%d\n%d", cnt1, cnt2);

    return 0;
}