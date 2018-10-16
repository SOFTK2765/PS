#include <bits/stdc++.h>

using namespace std;

int a[100001];
int s[100001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        s[i+1] = s[i]+a[i];
    int max = s[k];
    for(int i=k;i<=n;i++)
        if(max<s[i]-s[i-k]) max = s[i]-s[i-k];
    printf("%d", max);

    return 0;
}