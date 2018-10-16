#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if(n==1)
    {
        printf("%d", 0);
        return 0;
    }
    long long res = 2;
    for(int i=0;i<n-2;i++)
        res = (res*3)%1000000009;
    printf("%lld", res);

    return 0;
}