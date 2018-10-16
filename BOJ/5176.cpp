#include <bits/stdc++.h>

using namespace std;

bool a[501];

int main()
{
    int k;
    scanf("%d", &k);
    while(k--)
    {
        for(int i=0;i<501;i++)
            a[i] = false;
        int p, m;
        scanf(" %d %d", &p, &m);
        int cnt = 0;
        while(p--)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(a[tmp]) cnt++;
            else a[tmp] = true;
        }
        printf("%d\n", cnt);
    }

    return 0;
}