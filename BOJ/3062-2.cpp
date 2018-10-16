#include <bits/stdc++.h>

using namespace std;

char a[8];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        int tmp1 = n, tmp2 = 0;
        while(1)
        {
            tmp2 += (tmp1%10);
            if(tmp1/10==0) break;
            tmp1 /= 10;
            tmp2 *= 10;
        }
        int tmp = n+tmp2, pos = 0;
        memset(a, 0, sizeof(a));
        while(tmp>0)
        {
            a[pos++] = (tmp%10+'0');
            tmp /= 10;
        }
        for(int j=0;j<pos/2;j++)
        {
            if(a[j]!=a[pos-1-j])
            {
                printf("NO\n");
                break;
            }
            if(j==pos/2-1) printf("YES\n");
        }
    }

    return 0;
}