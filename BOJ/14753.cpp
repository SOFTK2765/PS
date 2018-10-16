#include <bits/stdc++.h>

using namespace std;

int a[10001], res[4];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    res[0] = a[0]*a[1]*a[n-1];
    res[1] = a[0]*a[1];
    res[2] = a[n-1]*a[n-2]*a[n-3];
    res[3] = a[n-1]*a[n-2];
    sort(res, res+4);
    printf("%d", res[3]);

    return 0;
}