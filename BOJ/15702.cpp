#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int hp, h = 0;
    for(int i=0;i<m;i++)
    {
        int tmp1;
        scanf(" %d", &tmp1);
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            char tmp2;
            scanf(" %c", &tmp2);
            if(tmp2=='O') sum += a[j];
        }
        if(h<sum)
        {
            h = sum;
            hp = tmp1;
        }
        else if(h==sum) if(hp>tmp1) hp = tmp1;
    }
    printf("%d %d", hp, h);

    return 0;
}