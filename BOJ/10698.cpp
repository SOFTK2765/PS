#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int x, y, z;
        char o;
        scanf(" %d %c %d %*c %d", &x, &o, &y, &z);
        if(o=='+')
        {
            printf("Case %d: ", i+1);
            printf("%s", x+y==z?"YES\n":"NO\n");
        }
        if(o=='-')
        {
            printf("Case %d: ", i+1);
            printf("%s", x-y==z?"YES\n":"NO\n");
        }
    }

    return 0;
}