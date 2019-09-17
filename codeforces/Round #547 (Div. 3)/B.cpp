#include <bits/stdc++.h>

using namespace std;

int a[400002];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        a[i+n] = a[i];
    int cnt = 0, mx = 0;
    for(int i=0;i<2*n;i++)
        if(a[i])
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else cnt = 0;
    printf("%d", mx);

    return 0;
}