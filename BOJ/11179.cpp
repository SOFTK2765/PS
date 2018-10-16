#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 0;
    while(1)
    {
        res += (n%2);
        if(n==1 || n==0) break;
        n /= 2;
        res *= 2;
    }
    printf("%d", res);

    return 0;
}