#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<n;i++)
        a[i] += a[i-1];
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        printf("%d\n", (int)(upper_bound(a, a+n, tmp)-a));
    }

    return 0;
}