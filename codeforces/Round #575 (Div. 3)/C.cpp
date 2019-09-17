#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n;
        scanf(" %d", &n);
        int posxa = -100000, posxb = 100000, posya = -100000, posyb = 100000;
        for(int i=0;i<n;i++)
        {
            int x, y, tmp1, tmp2, tmp3, tmp4;
            scanf(" %d %d %d %d %d %d", &x, &y, &tmp1, &tmp2, &tmp3, &tmp4);
            if(!tmp1) posxa = max(posxa, x);
            if(!tmp2) posyb = min(posyb, y);
            if(!tmp3) posxb = min(posxb, x);
            if(!tmp4) posya = max(posya, y);
        }
        if(posxa<=posxb && posya<=posyb) printf("%d %d %d\n", 1, posxa, posya);
        else printf("0\n");
    }

    return 0;
}