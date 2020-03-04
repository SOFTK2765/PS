#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf(" %d %d", &x, &y);
        if(x==1)
        {
            printf("%s\n", y==1?"YES":"NO");
            continue;
        }
        while(1)
        {
            int pre = x;
            x = x/2*3;
            if(x>=y)
            {
                printf("YES\n");
                break;
            }
            if(x==pre)
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}