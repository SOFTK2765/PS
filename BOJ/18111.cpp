#include <bits/stdc++.h>

using namespace std;

int cnt[257];

int main()
{
    int n, m, b;
    scanf("%d %d %d", &n, &m, &b);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            cnt[tmp]++;
        }
    int mn = 987654321, res;
    for(int i=0;i<=256;i++)
    {
        int tmp1 = 0, tmp2 = 0;
        for(int j=0;j<i;j++)
            tmp1 += (i-j)*cnt[j];
        for(int j=i;j<=256;j++)
            tmp2 += (j-i)*cnt[j]*2;
        if(tmp1>(tmp2/2)+b) break;
        if(mn>=tmp1+tmp2)
        {
            mn = tmp1+tmp2;
            res = i;
        }
    }
    printf("%d %d", mn, res);

    return 0;
}