#include <bits/stdc++.h>

using namespace std;

int a[1000001], lt[1000001], rt[1000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        mx = max(mx, a[i]);
        lt[i] = mx;
    }
    mx = 0;
    for(int i=n-1;i>=0;i--)
    {
        mx = max(mx, a[i]);
        rt[i] = mx;
    }
    int lcnt = 0, rcnt = 0;
    for(int i=0;i<n-1;i++)
        if(lt[i]<rt[i+1]) rcnt++;
        else if(lt[i]>rt[i+1]) lcnt++;
    printf("%c", lcnt>rcnt?'R':lcnt<rcnt?'B':'X');

    return 0;
}