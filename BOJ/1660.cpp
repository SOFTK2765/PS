#include <bits/stdc++.h>

using namespace std;

int a[121];
int res[300001];

int main()
{
    int cnt = 1, pre = 0;
    while(cnt<121)
    {
        pre = pre+(cnt*cnt+cnt)/2;
        a[cnt-1] = pre;
        cnt++;
    }
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        res[i] = 987654321;
    res[0] = 0;
    for(int i=0;a[i]<=n && i<121;i++)
    {
        for(int j=0;j+a[i]<=n;j++)
            res[j+a[i]] = min(res[j]+1, res[j+a[i]]);
    }
    printf("%d", res[n]);

    return 0;
}