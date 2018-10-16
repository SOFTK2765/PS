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
    for(int i=1;i<7;i++)
    {
        if(a[i][0]!=0) cnt += (((a[i][0]-1)/k)+1);
        if(a[i][1]!=0) cnt += (((a[i][1]-1)/k)+1);
    }
    printf("%d", cnt);

    return 0;
}