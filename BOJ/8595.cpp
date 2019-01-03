#include <bits/stdc++.h>

using namespace std;

char a[5000001];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int hn = 0, cnt = 0;
    long long res = 0;
    for(int i=0;i<n;i++)
    {
        if('0'<=a[i] && a[i]<='9')
        {
            cnt++;
            hn *= 10;
            hn += (a[i]-'0');
            if(cnt>=7)
            {
                while('0'<=a[i] && a[i]<='9' && i<n) i++;
                cnt = 0;
                hn = 0;
            }
        }
        else
        {
            cnt = 0;
            res += hn;
            hn = 0;
        }
        if(i==n-1)
        {
            res += hn;
            hn = 0;
        }
    }
    printf("%lld", res);

    return 0;
}