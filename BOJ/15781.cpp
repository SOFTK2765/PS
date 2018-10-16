#include <bits/stdc++.h>

using namespace std;

int a[1001], b[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
        scanf(" %d", &b[i]);
    sort(a, a+n);
    sort(b, b+m);
    printf("%d", a[n-1]+b[m-1]);

    return 0;
}