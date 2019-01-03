#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int c = a%b;
    while(c)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int main()
{
    int r, g;
    scanf("%d %d", &r, &g);
    int t = gcd(r, g);
    for(int i=1;i*i<=t;i++)
    {
        if(r%i==0 && g%i==0)
        {
            if(i*i!=t) printf("%d %d %d\n%d %d %d\n", i, r/i, g/i, t/i, r/(t/i), g/(t/i));
            else printf("%d %d %d", i, r/i, g/i);
        }
    }

    return 0;
}