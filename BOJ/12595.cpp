#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int tc=1;tc<=n;tc++)
    {
        int g;
        scanf(" %d", &g);
        for(int i=0;i<g;i++)
            scanf(" %d", &a[i]);
        sort(a, a+g);
        a[g] = -1;
        for(int i=0;i<g;i+=2)
        {
            if(a[i]!=a[i+1])
            {
                printf("Case #%d: %d\n", tc, a[i]);
                break;
            }
        }
    }

    return 0;
}