#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]+a[j]==k) cnt++;
    printf("%d", cnt);

    return 0;
}