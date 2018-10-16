#include <bits/stdc++.h>

using namespace std;

int a[4];

int gcd(int a, int b)
{
    int c = a%b;
    while(c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int res = a[0];
    for(int i=0;i<n-1;i++)
        res = gcd(res, a[i+1]);
    for(int i=1;i<=res;i++)
        if(res%i==0) printf("%d\n", i);

    return 0;
}