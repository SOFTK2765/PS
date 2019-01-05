#include <bits/stdc++.h>

using namespace std;

long long a[1025][1025];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %lld", &a[i][j]);
    int tmp = n, cnt = 0;
    while(tmp/2)
    {
        tmp /= 2;
        cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        int tpos = (int)pow(2, cnt-i-1);
        for(int j=0;j<tpos*2;j++)
            for(int k=tpos;k<tpos*2;k++)
                a[j][k-tpos] += a[j][k];
        for(int j=tpos;j<tpos*2;j++)
            for(int k=0;k<tpos;k++)
                a[j-tpos][k] += a[j][k];
    }
    printf("%lld", a[0][0]);

    return 0;
}