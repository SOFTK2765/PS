#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        a[i] = a[i-1]+tmp;
    }
    int m;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        printf("%d\n", a[e+1]-a[s]);
    }

    return 0;
}