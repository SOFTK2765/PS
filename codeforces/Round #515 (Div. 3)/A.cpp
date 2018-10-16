#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int len, v, l, r;
        scanf(" %d %d %d %d", &len, &v, &l, &r);
        int tmp = r/v-l/v;
        if(l%v==0) printf("%d\n", len/v-r/v+(l/v-1));
        else printf("%d\n", len/v-r/v+l/v);
    }

    return 0;
}