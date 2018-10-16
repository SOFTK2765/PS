#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int c;
    scanf(" %d", &c);
    long long cnt = 0;
    for(int i=0;i<n;i++)
        cnt += ceil((double)a[i]/c);
    printf("%lld", c*cnt);

    return 0;
}