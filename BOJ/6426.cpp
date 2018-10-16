#include <bits/stdc++.h>

using namespace std;

int check[10001];

int main()
{
    int t = 0;
    while(++t)
    {
        int z, i, m, l;
        scanf("%d %d %d %d ", &z, &i, &m, &l);
        if(z==0 && i==0 && m==0 && l==0) break;
        int cnt = 0;
        for(int i=0;i<10001;i++)
            check[i] = -1;
        check[l] = 0;
        while(++cnt)
        {
            l = (l*z+i)%m;
            if(check[l]!=-1) break;
            check[l] = cnt;
        }
        printf("Case %d: %d %d\n", t, cnt-check[l], l);
    }

    return 0;
}