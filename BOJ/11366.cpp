#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0) break;
        int res;
        for(int i=0;i<c;i++)
        {
            res = a+b;
            a = b;
            b = res;
        }
        printf("%d\n", res);
    }

    return 0;
}