#include <bits/stdc++.h>

using namespace std;

int a[1001];
int dp1[1000001];
pair<int, int> dp2[1000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp1[i*n+j] = a[i]+a[j];
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            dp2[pos].first = j;
            dp2[pos++].second = a[j]-a[i];
        }
    sort(dp1, dp1+(n*n));
    sort(dp2, dp2+pos);
    for(int i=(n-1)*n/2-1;i>=0;i--)
    {
        if(binary_search(dp1, dp1+(n*n), dp2[i].second))
        {
            printf("%d", a[dp2[i].first]);
            return 0;
        }
    }

    return 0;
}