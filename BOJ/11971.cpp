#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int pre = 0;
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        for(int j=pre;j<pre+tmp1;j++)
            a[j] = tmp2;
        pre += tmp1;
    }
    pre = 0;
    int pos = 0, mx = 0;
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        for(int j=pre;j<pre+tmp1;j++)
            mx = max(mx, tmp2-a[j]);
        pre += tmp1;
    }
    printf("%d", mx);

    return 0;
}