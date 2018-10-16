#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, tmp;
    char t;
    scanf("%d ", &a);
    for(int i=0;;i++)
    {
        if(i%2==0)
        {
            scanf("%c", &t);
            continue;
        }
        else scanf("%d ", &tmp);
        if(t=='=') break;
        else if(t=='+') a += tmp;
        else if(t=='-') a -= tmp;
        else if(t=='*') a *= tmp;
        else if(t=='/') a /= tmp;
    }
    printf("%d", a);

    return 0;
}