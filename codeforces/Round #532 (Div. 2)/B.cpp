#include <bits/stdc++.h>

using namespace std;

int check[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long sum = 1LL*n*(n+1)/2, tsum = sum;
    for(int i=0;i<m;i++)
    {
        long long tmp;
        scanf(" %lld", &tmp);
        if(check[tmp]==0) tsum -= tmp;
        check[tmp]++;
        if(tsum==0)
        {
            for(int j=1;j<=n;j++)
                check[j]--;
            tsum = sum;
            for(long long j=1;j<=n;j++)
                if(check[j]!=0) tsum -= j;
            printf("1");
        }
        else printf("0");
    }

    return 0;
}