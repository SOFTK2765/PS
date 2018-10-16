#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, a, b, c, d, k, m;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    if(a%c==0) k=a/c;
    else k=a/c+1;
    if(b%d==0) m=b/d;
    else m=b/d+1;
    printf("%d", k>m?l-k:l-m);

    return 0;
}