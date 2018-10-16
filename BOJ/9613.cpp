#include <bits/stdc++.h>

using namespace std;

int a[101];

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
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int sum = 0;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                sum += gcd(a[i], a[j]);
        printf("%d\n", sum);
    }

    return 0;
}