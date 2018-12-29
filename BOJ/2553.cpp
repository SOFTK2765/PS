#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 1;
    for(int i=1;i<=n;i++)
    {
        res *= i;
        while(res%10==0) res /= 10;
        res %= 10;
        printf("%d : %d\n", i, res);
    }
    printf("%d\n", res);

    return 0;
}