#include <bits/stdc++.h>

#define INF 10987654321

using namespace std;

long long a[101][101];
int p;

void floyd()
{
    for(int i=1;i<=p;i++)
        for(int j=1;j<=p;j++)
            for(int k=1;k<=p;k++)
                if(a[j][k]>a[j][i]+a[i][k]) a[j][k] = a[j][i]+a[i][k];
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, q;
        scanf(" %d %d %d", &n, &p, &q);
        for(int i=1;i<=p;i++)
            for(int j=1;j<=p;j++)
                a[i][j] = INF;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            v.push_back(tmp);
        }
        for(int j=0;j<q;j++)
        {
            int tmp1, tmp2, tmp3;
            scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
            if(a[tmp1][tmp2]>tmp3) a[tmp1][tmp2] = tmp3;
            if(a[tmp2][tmp1]>tmp3) a[tmp2][tmp1] = tmp3;
        }
        floyd();
        for(int i=1;i<=p;i++)
            for(int j=1;j<=p;j++)
                if(i==j) a[i][j] = 0;
        int size = v.size(), mni = 1;
        long long mn = INF;
        for(int i=1;i<=p;i++)
        {
            bool flag = false;
            long long tsum = 0;
            for(int j=0;j<size;j++)
            {
                if(a[v[j]][i]==INF)
                {
                    flag = true;
                    break;
                }
                tsum += 1LL*a[v[j]][i]*a[v[j]][i];
            }
            if(flag) continue;
            if(tsum<mn)
            {
                mn = tsum;
                mni = i;
            }
            mn = min(mn, tsum);
        }
        printf("%d %lld\n", mni, mn);
    }

    return 0;
}