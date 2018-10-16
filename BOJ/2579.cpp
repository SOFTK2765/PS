#include <bits/stdc++.h>

using namespace std;

int a[301], res[301];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n;i>0;i--)
        scanf(" %d", &a[i]);
    res[0] = a[0];
    res[1] = a[1];
    res[2] = a[1]+a[2];
    res[3] = a[1]+a[3];
    for(int i=4;i<=n;i++)
        res[i] = a[i]+max(a[i-1]+res[i-3], res[i-2]);
    printf("%d", max(res[n], res[n-1]));

    return 0;
}