#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    unsigned long long res = (unsigned long long)a[n-1]*k*(m/(k+1))+(unsigned long long)a[n-2]*(m/(k+1))+(unsigned long long)a[n-1]*(m%(k+1));
    printf("%llu", res);

    return 0;
}