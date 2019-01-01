#include <bits/stdc++.h>

using namespace std;

int a[51][51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%1d", &a[i][j]);
    int mn = min(n, m), mx = 0;
    for(int size=0;size<mn;size++)
        for(int i=0;i+size<n;i++)
            for(int j=0;j+size<m;j++)
                if(a[i][j]==a[i+size][j] && a[i][j]==a[i][j+size] && a[i][j]==a[i+size][j+size]) mx = max(mx, (size+1)*(size+1));
    printf("%d", mx);

    return 0;
}