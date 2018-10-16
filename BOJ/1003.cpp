#include <bits/stdc++.h>

using namespace std;

int a[41];

int main()
{
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<41;i++)
        a[i] = a[i-1]+a[i-2];
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) printf("%d %d\n", 1, 0);
        else printf("%d %d\n", a[n-1], a[n]);
    }

    return 0;
}