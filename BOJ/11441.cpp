#include <bits/stdc++.h>

using namespace std;

int a[100001];
int sum[100001];

int main()
{
    int n, m;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sum[0] = 0;
    for(int i=0;i<n;i++)
        sum[i+1] = sum[i]+a[i];
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        printf("%d\n", sum[e]-sum[s-1]);
    }

    return 0;
}