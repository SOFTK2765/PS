#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<=m;i++)
        for(int j=0;j<n-1;j++)
            if(a[j]%i>a[j+1]%i) swap(a[j], a[j+1]);
    for(int i=0;i<n;i++)
        printf("%d\n", a[i]);

    return 0;
}