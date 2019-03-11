#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, m;
    scanf("%d %d %d", &x, &y, &m);
    int mx = 0;
    for(int i=0;y*i<=m;i++)
        for(int j=0;x*j+y*i<=m;j++)
            mx = max(mx, x*j+y*i);
    printf("%d", mx);

    return 0;
}