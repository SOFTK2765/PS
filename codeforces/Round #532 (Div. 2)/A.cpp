#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        sum += a[i];
    }
    int mx = 0;
    for(int i=0;i<k;i++)
    {
        int tsum = 0;
        for(int j=i;j<n;j+=k)
            tsum += a[j];
        mx = max(mx, abs(sum-tsum));
    }
    printf("%d", mx);

    return 0;
}