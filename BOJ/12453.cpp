#include <bits/stdc++.h>

using namespace std;

int a[101], s[101];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int m, c, w;
        scanf(" %d %d %d", &m, &c, &w);
        for(int j=1;j<=m;j++)
            a[j] = j;
        for(int j=0;j<c;j++)
        {        
            for(int j=1;j<=m;j++)
                s[j] = j;
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            for(int k=tmp1;k<tmp1+tmp2;k++)
                s[k-tmp1+1] = a[k];
            for(int k=tmp1-1;k>=1;k--)
                a[k+tmp2] = a[k];
            for(int k=1;k<=tmp2;k++)
                a[k] = s[k];
        }
        printf("Case #%d: %d\n", i+1, a[w]);
    }

    return 0;
}