#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int tc=1;;tc++)
    {
        int l, p, v;
        scanf(" %d %d %d", &l, &p, &v);
        if(l+p+v==0) break;
        printf("Case %d: %d\n", tc, v/p*l+min(l, v%p));
    }

    return 0;
}