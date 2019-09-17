#include <bits/stdc++.h>

using namespace std;

int a[12];
int cnt[5];

int n, mn = 1987654321, mx = -1987654321;

void f(int pos, int pre)
{
    if(pos==n)
    {
        mn = min(mn, pre);
        mx = max(mx, pre);
        return;
    }
    if(cnt[0])
    {
        cnt[0]--;
        f(pos+1, pre+a[pos]);
        cnt[0]++;
    }
    if(cnt[1])
    {
        cnt[1]--;
        f(pos+1, pre-a[pos]);
        cnt[1]++;
    }
    if(cnt[2])
    {
        cnt[2]--;
        f(pos+1, pre*a[pos]);
        cnt[2]++;
    }
    if(cnt[3])
    {
        cnt[3]--;
        f(pos+1, pre/a[pos]);
        cnt[3]++;
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<4;i++)
        scanf(" %d", &cnt[i]);
    f(1, a[0]);
    printf("%d\n%d", mx, mn);

    return 0;
}