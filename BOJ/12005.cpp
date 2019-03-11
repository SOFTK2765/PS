#include <bits/stdc++.h>

using namespace std;

int cnt[10001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        cnt[tmp]++;
    }
    int sum = 0;
    for(int i=1;i<=k;i++)
        sum += cnt[i];
    int mx = sum;
    for(int i=k+1;i<=10000;i++)
    {
        sum += cnt[i];
        sum -= cnt[i-k-1];
        mx = max(mx, sum);
    }
    printf("%d", mx);

    return 0;
}