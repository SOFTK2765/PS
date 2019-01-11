#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long res = 1;
    for(int i=1;i<=n;i++)
    {
        res *= i;
        while(res%10==0) res /= 10;
        res %= 10;
    }
    printf("%d\n", res%10);

    return 0;
}