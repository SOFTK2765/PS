#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[1001];
int dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].second, &a[i].first);
    sort(a, a+n);
    for(int i=n-1;i>=0;i--)
        for(int j=a[i].second;j>=1;j--)
            if(!dp[j])
            {
                dp[j] = a[i].first;
                break;
            }
    int sum = 0;
    for(int i=1;i<=1000;i++)
        sum += dp[i];
    printf("%d", sum);

    return 0;
}