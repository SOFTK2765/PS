#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    int mn = 987654321;
    if(n>=3) mn = min(a[n-2]-a[0], a[n-1]-a[1]);
    else mn = 0;
    printf("%d", mn);

    return 0;
}