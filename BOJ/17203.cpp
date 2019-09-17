#include <bits/stdc++.h>

using namespace std;

int a[1001], sum[1001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<n;i++)
        sum[i] = sum[i-1]+abs(a[i]-a[i-1]);
    for(int i=0;i<q;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        if(s>=e) printf("0\n");
        else printf("%d\n", sum[e-1]-sum[s-1]);
    }

    return 0;
}