#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int a[11];
        for(int j=1;j<=10;j++)
            scanf(" %d", &a[j]);
        for(int j=1;j<=10;j++)
        {
            if(a[j]!=((j-1)%5)+1) break;
            if(j==10) printf("%d\n", i);
        }
    }

    return 0;
}