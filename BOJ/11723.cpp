#include <bits/stdc++.h>

using namespace std;

bool check[21];
char a[7];

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        scanf(" %s", a);
        int x;
        if(strcmp(a, "add")==0)
        {
            scanf(" %d", &x);
            check[x] = true;
        }
        else if(strcmp(a, "remove")==0)
        {
            scanf(" %d", &x);
            check[x] = false;
        }
        else if(strcmp(a, "check")==0)
        {
            scanf(" %d", &x);
            printf("%d\n", check[x]);
        }
        else if(strcmp(a, "toggle")==0)
        {
            scanf(" %d", &x);
            check[x] = check[x]?false:true;
        }
        else if(strcmp(a, "all")==0)
        {
            for(int i=1;i<=20;i++)
                check[i] = true;
        }
        else if(strcmp(a, "empty")==0)
        {
            for(int i=1;i<=20;i++)
                check[i] = false;
        }
    }

    return 0;
}