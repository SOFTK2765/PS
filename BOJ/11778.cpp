#include <bits/stdc++.h>

#define MD 1000000007

using namespace std;

long long a[][2] = {{1, 0}, {0, 1}};
long long b[][2] = {{1, 1}, {1, 0}};
long long tmp[2][2];

inline long long gcd(long long a, long long b){return a%b?gcd(b, a%b):b;}

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long ind = gcd(n, m);
    while(ind)
    {
        if(ind%2)
        {
            tmp[0][0] = a[0][0];
            tmp[0][1] = a[0][1];
            tmp[1][0] = a[1][0];
            tmp[1][1] = a[1][1];
            a[0][0] = ((tmp[0][0]*b[0][0])%MD+(tmp[0][1]*b[1][0])%MD)%MD;
            a[0][1] = ((tmp[0][0]*b[0][1])%MD+(tmp[0][1]*b[1][1])%MD)%MD;
            a[1][0] = ((tmp[1][0]*b[0][0])%MD+(tmp[1][1]*b[1][0])%MD)%MD;
            a[1][1] = ((tmp[1][0]*b[0][1])%MD+(tmp[1][1]*b[1][1])%MD)%MD;
        }
        tmp[0][0] = b[0][0];
        tmp[0][1] = b[0][1];
        tmp[1][0] = b[1][0];
        tmp[1][1] = b[1][1];
        b[0][0] = ((tmp[0][0]*tmp[0][0])%MD+(tmp[0][1]*tmp[1][0])%MD)%MD;
        b[0][1] = ((tmp[0][0]*tmp[0][1])%MD+(tmp[0][1]*tmp[1][1])%MD)%MD;
        b[1][0] = ((tmp[1][0]*tmp[0][0])%MD+(tmp[1][1]*tmp[1][0])%MD)%MD;
        b[1][1] = ((tmp[1][0]*tmp[0][1])%MD+(tmp[1][1]*tmp[1][1])%MD)%MD;
        ind /= 2;
    }
    printf("%lld", a[0][1]);

    return 0;
}