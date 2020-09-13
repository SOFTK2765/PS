#include <bits/stdc++.h>

using namespace std;

int check;

char s[7];

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        scanf(" %s", s);
        int x;
        if(strcmp(s, "add")==0)
        {
            scanf(" %d", &x);
            check += check&(1<<x)?0:(1<<x);
        }
        else if(strcmp(s, "remove")==0)
        {
            scanf(" %d", &x);
            check -= check&(1<<x)?(1<<x):0;
        }
        else if(strcmp(s, "check")==0)
        {
            scanf(" %d", &x);
            printf("%d\n", (check&(1<<x))?1:0);
        }
        else if(strcmp(s, "toggle")==0)
        {
            scanf(" %d", &x);
            check += check&(1<<x)?-(1<<x):(1<<x);
        }
        else if(strcmp(s, "all")==0) check = 4194302;
        else if(strcmp(s, "empty")==0) check = 0;
    }

    return 0;
}