#include <bits/stdc++.h>

using namespace std;

char a[11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int m;
        scanf(" %d", &m);
        int cnt = 0;
        while(m--)
        {
            memset(a, 0, sizeof(a));
            scanf(" %s", a);
            if(strcmp(a, "sheep")==0) cnt++;
        }
        printf("Case %d: This list contains %d sheep.\n\n", i, cnt);
    }


    return 0;
}