#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];
int row[1001], col[1001];
bool check[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long sum = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            sum += a[i][j];
        }
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=0;j<m;j++)
            if(a[i][mx]<a[i][j]) mx = j;
        row[i] = mx;
    }
    for(int j=0;j<m;j++)
    {
        int mx = 0;
        for(int i=0;i<n;i++)
            if(a[mx][j]<a[i][j]) mx = i;
        col[j] = mx;
    }
    for(int i=0;i<n;i++)
        check[i][row[i]] = true;
    for(int i=0;i<m;i++)
        check[col[i]][i] = true;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(check[i][j]) sum -= a[i][j];
    printf("%lld", sum);

    return 0;
}