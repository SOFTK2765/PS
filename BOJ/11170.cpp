#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        int cnt = 0;
        for(int i=n;i<=m;i++)
        {
            int tmp = i;
            while(1)
            {
                if(tmp%10==0) cnt++;
                if(tmp/10==0) break;
                tmp /= 10;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}