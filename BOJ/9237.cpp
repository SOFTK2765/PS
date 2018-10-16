#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n, greater<int>());
    int max = 0;
    for(int i=0;i<n;i++)
        if(max<a[i]+i+1) max=a[i]+i+1;
    printf("%d", max+1);

    return 0;
}