#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int summ[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int sum = 0;
    summ[0] = 1;
    for(int i=0;i<n;i++)
    {
        sum = (sum+a[i])%m;
        summ[sum]++;
    }
    long long res = 0;
    for(int i=0;i<m;i++)
        res += 1LL*summ[i]*(summ[i]-1)/2;
    printf("%lld", res);

    return 0;
}