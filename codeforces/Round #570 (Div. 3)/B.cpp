#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        sort(a, a+n);
        int res = -1;
        if(a[0]+k>=a[n-1]-k) res = a[0]+k;
        printf("%d\n", res);
    }

    return 0;
}