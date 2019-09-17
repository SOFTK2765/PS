#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    if(n==0)
    {
        printf("NO");
        return 0;
    }
    while(n)
    {
        if(n%3==2)
        {
            printf("NO");
            return 0;
        }
        n /= 3;
    }
    printf("YES");

    return 0;
}