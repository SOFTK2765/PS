#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int s[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<n;i++)
        sort(&a[i][0],&a[i][m]);
    for(int i=0;i<m;i++)
    {
        int mx = 0;
        for(int j=0;j<n;j++)
            mx = max(mx, a[j][i]);
        for(int j=0;j<n;j++)
            if(a[j][i]==mx) s[j]++;
    }
    int mx = 0;
    for(int i=0;i<n;i++)
        mx = max(mx, s[i]);
    for(int i=0;i<n;i++)
        if(s[i]==mx) printf("%d ", i+1);

    return 0;
}