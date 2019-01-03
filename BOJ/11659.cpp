#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        a[i] = a[i-1]+tmp;
    }
    for(int i=0;i<m;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        printf("%d\n", a[e]-a[s-1]);
    }

    return 0;
}