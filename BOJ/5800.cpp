#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int k;
    scanf("%d", &k);
    for(int i=1;i<=k;i++)
    {
        int n;
        scanf(" %d", &n);
        int tmp, s;
        for(int j=0;j<n;j++)
            scanf(" %d", &a[j]);
        sort(a, a+n);
        int lg = 0;
        for(int j=1;j<n;j++)
            if(lg<a[j]-a[j-1]) lg = a[j]-a[j-1];
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i, a[n-1], a[0], lg);
    }

    return 0;
}