#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        int cnt = 0;
        while(n%2==0)
        {
            cnt++;
            n /= 2;
        }
        int tmp = n;
        int pre = 2;
        for(int j=3;j<=n;j+=2)
        {
            while(tmp%j==0)
            {
                if(pre==j) cnt++;
                else
                {
                    if(cnt!=0) printf("%d %d\n", pre, cnt);
                    cnt = 1;
                    pre = j;
                }
                tmp /= j;
            }
        }
        printf("%d %d\n", pre, cnt);
    }

    return 0;
}