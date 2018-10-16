#include <bits/stdc++.h>

using namespace std;

char a[25];

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        memset(a, 0, sizeof(a));
        scanf("%s", a);
        int res = 0;
        for(int i=0;i<24;i++)
        {
            res *= 2;
            if(a[i]=='1') res += 1;
        }
        printf("%d\n", res);
    }

    return 0;
}