#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case %d:\n", tc);
        int n;
        scanf(" %d", &n);
        for(int i=1;i<=6;i++)
            for(int j=i;j<=6;j++)
                if(i+j==n) printf("(%d,%d)\n", i, j);
    }

    return 0;
}