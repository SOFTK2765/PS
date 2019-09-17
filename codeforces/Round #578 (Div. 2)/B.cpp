#include <bits/stdc++.h>

using namespace std;

long long h[1000001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        long long m, k;
        scanf(" %d %lld %lld", &n, &m, &k);
        for(int i=0;i<n;i++)
            scanf(" %lld", &h[i]);
        bool res = true;
        for(int i=0;i<n-1;i++)
        {
            if(h[i+1]<=h[i]) m += (k>h[i+1]?h[i]:h[i]-h[i+1]+k);
            else
            {
                if(h[i+1]-h[i]>k)
                {
                    if(h[i+1]-h[i]-k>m)
                    {
                        res = false;
                        break;
                    }
                    m -= h[i+1]-h[i]-k;
                }
                else m += (k>h[i+1]?h[i]:k-h[i+1]+h[i]);
            }
        }
        printf("%s\n", res?"YES":"NO");
    }

    return 0;
}