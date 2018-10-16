#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(m>n-m) m = n-m;
    int cnt2 = 0, cnt5 = 0;
    for(int i=n;i>n-m;i--)
    {
        int tmp = i;
        while(tmp%2==0)
        {
            cnt2++;
            tmp /= 2;
        }
        while(tmp%5==0)
        {
            cnt5++;
            tmp /= 5;
        }
    }
    for(int i=m;i>=2;i--)
    {
        int tmp = i;
        while(tmp%2==0)
        {
            cnt2--;
            tmp /= 2;
        }
        while(tmp%5==0)
        {
            cnt5--;
            tmp /= 5;
        }
    }
    int res = cnt2<cnt5?cnt2:cnt5;
    if(res>=0) printf("%d", res);
    else printf("%d", 0);

    return 0;
}