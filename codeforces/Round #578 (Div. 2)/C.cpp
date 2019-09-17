#include <bits/stdc++.h>

using namespace std;

long long gcd_euc(long long a, long long b){return a%b?gcd_euc(b, a%b):b;}

int main()
{
    long long n, m;
    int q;
    scanf("%lld %lld %d", &n, &m, &q);
    long long gcd = gcd_euc(n, m), ind = n/gcd, outd = m/gcd;
    while(q--)
    {
        long long sx, sy, ex, ey;
        scanf(" %lld %lld %lld %lld", &sx, &sy, &ex, &ey);
        bool flag = false;
        if(sx==1 && ex==1)
        {
            if((sy-1)/ind==(ey-1)/ind) flag = true;
        }
        else if(sx==1 && ex==2)
        {
            if((sy-1)/ind==(ey-1)/outd) flag = true;
        }
        else if(sx==2 && ex==1)
        {
            if((sy-1)/outd==(ey-1)/ind) flag = true;
        }
        else if(sx==2 && ex==2)
        {
            if((sy-1)/outd==(ey-1)/outd) flag = true;
        }
        printf("%s\n", flag?"YES":"NO");
    }

    return 0;
}