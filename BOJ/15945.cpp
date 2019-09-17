#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    printf("%d", min(a[n-1]-a[0], a[0]));


    return 0;
}