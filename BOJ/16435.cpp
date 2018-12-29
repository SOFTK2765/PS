#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int res = l;
    for(int i=0;i<n;i++)
        if(l>=a[i]) l++;
        else break;
    printf("%d", l);

    return 0;
}