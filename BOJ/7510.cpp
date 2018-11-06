#include <bits/stdc++.h>

using namespace std;

int a[4];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
            scanf(" %d", &a[j]);
        sort(a, a+3);
        printf("Scenario #%d:\n%s\n\n", i, ((a[0]*a[0]+a[1]*a[1])==a[2]*a[2])?"yes":"no");
    }

    return 0;
}