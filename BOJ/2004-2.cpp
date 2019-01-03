#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    m = max(m, n-m);
    long long cnt2 = 0, cnt5 = 0, div = 2;
    while(n/div)
    {
        cnt2 += (n/div);
        div *= 2;
    }
    div = 5;
    while(n/div)
    {
        cnt5 += (n/div);
        div *= 5;
    }
    for(int i=0;i<2;i++)
    {
        if(i==1) m = min(m, n-m);
        div = 2;
        while(m/div)
        {
            cnt2 -= (m/div);
            div *= 2;
        }
        div = 5;
        while(m/div)
        {
            cnt5 -= (m/div);
            div *= 5;
        }
    }
    printf("%d", min(cnt2, cnt5));

    return 0;
}