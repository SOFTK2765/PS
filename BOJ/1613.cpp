#include <bits/stdc++.h>

using namespace std;

int d[401][401] = {};
int n, k;

void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[a][b]
}

int main()
{
    scanf("%d %d ", &n, &k);
    for(int i=0;i<k;i++)
    {
        int a, b;
        scanf("%d %d ", &a, &b);
        d[a][b] = -1;
    }

    return 0;
}