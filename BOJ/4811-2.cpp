#include <bits/stdc++.h>

using namespace std;

long long a[31][31];

long long f(int w, int h)
{
    if(w<0 || h<0) return 0;
    if(w==0 && h==0) return 1;
    long long &res = a[w][h];
    if(res!=-1) return res;
    return res = f(w-1, h+1)+f(w, h-1);
}

int main()
{
    int n;
    while(1)
    {
        memset(a, -1, sizeof(a));
        scanf(" %d", &n);
        if(n==0) break;
        printf("%lld\n", f(n, 0));
    }

    return 0;
}