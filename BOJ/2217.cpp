#include <bits/stdc++.h>

using namespace std;

int a[100001];

bool cmp(const int &a, const int &b){return a>b;}

int main()
{
    int n;
    scanf(" %d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n, cmp);
    int mx = 0;
    for(int i=1;i<=n;i++)
        mx = max(mx, a[i-1]*i);
    printf("%d", mx);

    return 0;
}