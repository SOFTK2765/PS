#include <bits/stdc++.h>

using namespace std;

int a[200001], b[200001], dp1[200001], dp2[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1) scanf(" %d", &a[i]);
        else scanf(" %d", &b[i]);
    }
    for(int i=1;i<=n;i++)
    {
        dp1[i] = dp1[i-1]+a[i];
        dp2[i] = dp2[i-1]+b[i];
    }
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            if(dp2[n]==dp1[n]-a[i]-b[i]) cnt++;
        }
        else if(i==n)
        {
            if(dp1[(n%2==1)?n-1:n]==dp1[n]+dp2[n]-dp1[(n%2==1)?n-1:n]-a[i]-b[i]) cnt++;
        }
        else
        {
            if(dp1[i-(i%2)]+dp2[n]-dp2[i]==dp1[n]+dp2[n]-(dp1[i-(i%2)]+dp2[n]-dp2[i])-a[i]-b[i]) cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}