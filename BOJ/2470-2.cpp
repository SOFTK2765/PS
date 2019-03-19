#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int posa = 0, posb = n-1, sa = 0, sb = n-1, mn = 2e9;
    while(posa<posb)
    {
        if(abs(a[posa]+a[posb])<mn)
        {
            mn = abs(a[posa]+a[posb]);
            sa = posa;
            sb = posb;
        }
        if(abs(a[posa+1]+a[posb])<abs(a[posa]+a[posb-1])) posa++;
        else posb--;
    }
    printf("%d %d", a[sa], a[sb]);

    return 0;
}