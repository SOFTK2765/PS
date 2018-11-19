#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(a>b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        if(b>c)
        {
            int tmp = b;
            b = c;
            c = tmp;
        }
        if(a>b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        if(c>=a+b) printf("Case #%d: invalid!\n", i);
        else
        {
            if(a==b && b==c) printf("Case #%d: equilateral\n", i);
            else if(a==b || b==c || c==a) printf("Case #%d: isosceles\n", i);
            else printf("Case #%d: scalene\n", i);
        }
    }

    return 0;
}