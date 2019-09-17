#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];
bool check[100001];

int main()
{
    int l, n, rf, rb;
    scanf("%d %d %d %d", &l, &n, &rf, &rb);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    int mx = 0;
    for(int i=n-1;i>=0;i--)
        if(mx<a[i].second)
        {
            check[i] = true;
            mx = a[i].second;
        }
    long long sum = 0;
    int pre = 0;
    for(int i=0;i<n;i++)
        if(check[i])
        {
            sum += 1LL*(a[i].first-pre)*(rf-rb)*a[i].second;
            pre = a[i].first;
        }
    printf("%lld", sum);

    return 0;
}