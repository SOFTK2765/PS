#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int c = a%b;
    while(c!=0)
    {
        a = b;
        b = c;
        c = a%c;
    }
    return b;
}

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    for(int i=0;i<n-1;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        printf("%d/%d\n", a/gcd(a, tmp), tmp/gcd(a, tmp));
    }

    return 0;
}