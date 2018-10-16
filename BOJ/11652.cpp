#include <bits/stdc++.h>

using namespace std;

long long a[1000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lld", &a[i]);
    sort(a, a+n);
    int mx = 0;
    long long res = a[0];
    for(int i=0;i<n;)
    {
        long long s = a[i];
        int cnt = 0;
        while(1)
        {
            if(a[i]==s)
            {
                i++;
                cnt++;
            }
            else
            {
                if(mx<cnt)
                {
                    mx = cnt;
                    res = s;
                }
                break;
            }
        }
    }
    printf("%lld", res);

    return 0;
}