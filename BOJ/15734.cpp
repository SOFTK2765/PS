#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, a;
    scanf("%d %d %d", &l, &r, &a);
    if(abs(l-r)<=a) printf("%d", (l+r+a)/2*2);
    else
        if(l<r) printf("%d", (l+a)*2);
        else printf("%d", (r+a)*2);

    return 0;
}