#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int s;
        scanf(" %d", &s);
        if(s==0) break;
        while(s/10!=0)
        {
            printf("%d ", s);
            int res = 1;
            while(s/10!=0)
            {
                res *= (s%10);
                s /= 10;
            }
            res *= s;
            s = res;
        }
        printf("%d\n", s);
    }

    return 0;
}