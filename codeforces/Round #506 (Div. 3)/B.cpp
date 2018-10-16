#include <bits/stdc++.h>

using namespace std;

int a[200001], dp[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n-1;i++)
        if(a[i]*2>=a[i+1]) dp[i] = 1;
    int cnt = 0, mx = 0;
    for(int i=0;i<n;i++)
    {
        if(dp[i]==1) cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    printf("%d", mx+1);

    return 0;
}