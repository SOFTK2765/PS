#include <bits/stdc++.h>

using namespace std;

int a[150002], cnt[150002], dp[150002];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        cnt[a[i]]++;
    }
    sort(a, a+n);
    int cnt = 0, mx = 0;
    for(int i=1;i<=150000;i++)
    {
        if(cnt[i]==0)
        {
            if(cnt[i-1]==0)
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
            if(cnt[i-1]>=2 || cnt[i+1]>=2)
            {
                
            }
        }
    }

    return 0;
}