#include <bits/stdc++.h>

using namespace std;

int a[101];
int res[10001];
int tmp[10001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    tmp[0] = res[0] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j+a[i]<=k;j++)
            res[j+a[i]] = res[j]+res[j+a[i]];
    }
    printf("%d", res[k]);

    return 0;
}