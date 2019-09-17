#include <bits/stdc++.h>

using namespace std;

int a[500001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    long long sum = 0;
    for(int i=0;i<n;i++)
        sum += abs(a[i]-i-1);
    printf("%lld", sum);

    return 0;
}