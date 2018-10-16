#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    if(a[k-1]==a[k] || a[k-1]+1==a[k] || (k==n && a[n-1]==1000000000)) printf("%d", -1);
    else printf("%d", a[k-1]+1);

    return 0;
}