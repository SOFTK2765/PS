#include <bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int b, c;
    scanf(" %d %d", &b, &c);
    long long cnt = n;
    for(int i=0;i<n;i++)
        if(a[i]>b) cnt += ((a[i]-b-1)/c+1);
    printf("%lld", cnt);

    return 0;
}