#include <bits/stdc++.h>

using namespace std;

int a[501][501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    int mx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m-3;j++)
            mx = max(mx, a[i][j]+a[i][j+1]+a[i][j+2]+a[i][j+3]);
    for(int i=0;i<n-3;i++)
        for(int j=0;j<m;j++)
            mx = max(mx, a[i][j]+a[i+1][j]+a[i+2][j]+a[i+3][j]);
    for(int i=0;i<n-1;i++)
        for(int j=0;j<m-1;j++)
            mx = max(mx, a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]);
    for(int i=0;i<n-2;i++)
        for(int j=0;j<m-1;j++)
            mx = max(mx, max(max(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+2][j], a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+2][j+1]), max(a[i][j]+a[i+1][j]+a[i+2][j]+a[i+2][j+1], a[i][j+1]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1])));
    for(int i=0;i<n-1;i++)
        for(int j=0;j<m-2;j++)
            mx = max(mx, max(max(a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2], a[i+1][j]+a[i+1][j+1]+a[i][j+2]+a[i+1][j+2]), max(a[i][j]+a[i+1][j]+a[i][j+1]+a[i][j+2], a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+2])));
    for(int i=0;i<n-2;i++)
        for(int j=0;j<m-1;j++)
            mx = max(mx, max(a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i+2][j+1], a[i][j+1]+a[i+1][j]+a[i+1][j+1]+a[i+2][j]));
    for(int i=0;i<n-1;i++)
        for(int j=0;j<m-2;j++)
            mx = max(mx, max(a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j+2], a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]));
    for(int i=0;i<n-2;i++)
        for(int j=0;j<m-1;j++)
            mx = max(mx, max(a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i+2][j], a[i][j+1]+a[i+1][j]+a[i+1][j+1]+a[i+2][j+1]));
    for(int i=0;i<n-1;i++)
        for(int j=0;j<m-2;j++)
            mx = max(mx, max(a[i][j+1]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2], a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]));
    printf("%d", mx);

    return 0;
}