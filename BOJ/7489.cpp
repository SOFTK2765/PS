#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        int res = 1;
        for(int i=1;i<=n;i++)
        {
            res *= i;
            while(res%10==0) res /= 10;
            res %= 10;
        }
        printf("%d", res);
    }

    return 0;
}