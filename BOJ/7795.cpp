#include <bits/stdc++.h>

using namespace std;

int a[20001], b[20001];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=0;tc<t;tc++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<m;i++)
            scanf(" %d", &b[i]);
        sort(b, b+m);
        int cnt = 0;
        for(int i=0;i<n;i++)
            cnt += lower_bound(b, b+m, a[i])-b;
        printf("%d\n", cnt);
    }

    return 0;
}