#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a, b, c, d;
        scanf(" %d %d %d %d", &a, &b, &c, &d);
        if(a==0 && b==0 && c==0 && d==0) break;
        for(int i=100;i>=1;i--)
            if((1.0*a*i/100<=c && 1.0*b*i/100<=d) || (1.0*b*i/100<=c && 1.0*a*i/100<=d))
            {
                printf("%d\%\n", i);
                break;
            }
    }

    return 0;
}