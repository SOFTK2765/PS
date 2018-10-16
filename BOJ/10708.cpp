#include <bits/stdc++.h>

using namespace std;

int a[101], s[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
        for(int j=1;j<=n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(tmp==a[i]) s[j]++;
            else s[a[i]]++;
        }
    for(int i=1;i<=n;i++)
        printf("%d\n", s[i]);

    return 0;
}