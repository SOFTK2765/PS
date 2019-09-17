#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if(k==0)
    {
        if(n>m) swap(n, m);
        long long res = 1;
        for(int i=n+m-2;i>=m;i--)
            res *= i;
        for(int i=n-1;i>=1;i--)
            res /= i;
        printf("%lld", res);
    }
    else
    {
        for(int i=0;i<n;i++)
            for(int j=1;j<=m;j++)
                if(i*m+j==k)
                {
                    int tmp1 = i, tmp2 = j-1;
                    if(tmp1>tmp2) swap(tmp1, tmp2);
                    long long res1 = 1, res2 = 1;
                    for(int k=tmp1+tmp2;k>=tmp2+1;k--)
                        res1 *= k;
                    for(int k=tmp1;k>=1;k--)
                        res1 /= k;
                    tmp1 = n-i-1;
                    tmp2 = m-j;
                    if(tmp1>tmp2) swap(tmp1, tmp2);
                    for(int k=tmp1+tmp2;k>=tmp2+1;k--)
                        res2 *= k;
                    for(int k=tmp1;k>=1;k--)
                        res2 /= k;
                    printf("%lld", res1*res2);
                }
    }

    return 0;
}