#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    long long sum = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            sum += a[j]-a[i];
    printf("%lld", sum*2);

    return 0;
}