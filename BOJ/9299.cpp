#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case %d: ", tc);
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n+1;i++)
            scanf(" %d", &a[i]);
        printf("%d ", n-1);
        for(int i=0;i<n;i++)
            printf("%d ", a[i]*(n-i));
        printf("\n");
    }

    return 0;
}