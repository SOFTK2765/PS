#include <bits/stdc++.h>

using namespace std;

int a[51], b[51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
        scanf(" %d %d", &a[i], &b[i]);
    sort(a, a+m);
    sort(b, b+m);
    int res = min(a[0]*((n-1)/6+1), min(a[0]*(n/6)+b[0]*(n%6), b[0]*n));
    printf("%d\n", res);

    return 0;
}