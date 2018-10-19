#include <bits/stdc++.h>

using namespace std;

char a[101], b[101];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int l;
        scanf(" %d %s %s", &l, a, b);
        int cnt = 0;
        for(int j=0;j<l;j++)
            if(a[j]!=b[j]) cnt++;
        printf("Case %d: %d\n", i, cnt);
    }

    return 0;
}