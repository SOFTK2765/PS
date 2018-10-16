#include <bits/stdc++.h>

using namespace std;

int a[200001], bcnt[500001], tcnt[500001], cnt[500001];

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        if(i%2==0) bcnt[a[i]]++;
        else tcnt[h-a[i]]++;
    for(int i=h-1;i>=0;i--)
        bcnt[i] += bcnt[i+1];
    for(int i=0;i<h;i++)
        tcnt[i+1] += tcnt[i];
    for(int i=0;i<h;i++)
        cnt[i+1] = bcnt[i+1]+tcnt[i];
    sort(cnt+1, cnt+h+1);
    int mn = cnt[1], rescnt = 1, pos = 2;
    while(mn==cnt[pos++]) rescnt++;
    printf("%d %d", mn, rescnt);

    return 0;
}