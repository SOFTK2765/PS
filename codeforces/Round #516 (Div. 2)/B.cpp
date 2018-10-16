#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a;
        scanf(" %d", &a);
        int cnt = 0;
        while(a>0)
        {
            if(a%2==1) cnt++;
            a /= 2;
        }
        printf("%lld\n", (long long)pow(2, cnt));
    }

    return 0;
}