#include <bits/stdc++.h>

using namespace std;

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
    int s, m;
    while(~scanf(" %d %d", &s, &m)) printf("%10d%10d %s\n\n", s, m, gcd(s, m)==1?"Good Choice":"Bad Choice");

    return 0;
}