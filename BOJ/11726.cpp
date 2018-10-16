#include <bits/stdc++.h>

using namespace std;

int a[1002];

int main()
{
    a[1] = 1;
    a[2] = 2;
    int n;
    scanf("%d", &n);
    if(n==1)
    {
        printf("%d", 1);
        return 0;
    }
    else if(n==2)
    {
        printf("%d", 2);
        return 0;
    }
    for(int i=3;i<=n;i++)
        a[i] = (a[i-1]+a[i-2])%10007;
    printf("%d", a[n]);

    return 0;
}