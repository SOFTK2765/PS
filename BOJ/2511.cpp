#include <bits/stdc++.h>

using namespace std;

int a[11], b[11];

int main()
{
    for(int i=0;i<10;i++)
        scanf(" %d", &a[i]);
    int as = 0, bs = 0, lw = 0;
    for(int i=0;i<10;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(a[i]>tmp)
        {
            as += 3;
            lw = 1;
        }
        else if(a[i]<tmp)
        {
            bs += 3;
            lw = 2;
        }
        else
        {
            as++;
            bs++;
        }
    }
    printf("%d %d\n%c", as, bs, as>bs?'A':as<bs?'B':lw==1?'A':lw==2?'B':'D');

    return 0;
}