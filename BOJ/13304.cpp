#include <bits/stdc++.h>

using namespace std;

int a[7][2] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    while(n--)
    {
        int s, y;
        scanf(" %d %d", &s, &y);
        a[y][s]++;
    }
    int cnt = 0;
    cnt += ((a[1][0]+a[1][1]+a[2][0]+a[2][1])/k);
    if((a[1][0]+a[1][1]+a[2][0]+a[2][1])%k!=0) cnt++;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
                cnt += ((a[i*2+3][j]+a[i*2+4][j])/k);
                if((a[i*2+3][j]+a[i*2+4][j])%k!=0) cnt++;
        }
    printf("%d", cnt);

    return 0;
}