#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        for(int j = 0;j<n;j++)
            scanf(" %d", &a[j]);
        int sum = 0;
        for(int j=0;j<n;j++)
            sum += a[j];
        printf("%s\n", (sum==0)?"Equilibrium":(sum>0?"Right":"Left"));
    }

    return 0;
}