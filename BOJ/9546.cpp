#include <bits/stdc++.h>

using namespace std;

int a[31] = {};

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=30;i++)
        a[i] = (a[i-1]+0.5)*2;
    while(t--)
    {
        int k;
        scanf(" %d", &k);
        printf("%d\n", a[k]);
    }

    return 0;
}