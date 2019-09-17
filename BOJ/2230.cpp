#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int mn = 2e9, posa = 0, posb = 0;
    while(posa<n && posb<n)
    {
        int tmp = a[posb]-a[posa];
        if(tmp>=m)
        {
            mn = min(mn, tmp);
            posa++;
        }
        else posb++;
        if(posa>posb) posb++;
    }
    printf("%d", mn);

    return 0;
}