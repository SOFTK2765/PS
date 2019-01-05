#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int posa = (n-1)/2, posb = n/2;
    if(n==1)
    {
        printf("%d", a[0]);
        return 0;
    }
    while(0<=posa && posb<n)
    {
        if(posa==posb)
        {
            printf("%d ", a[posa--]);
            posb++;
        }
        if(n%2==0) printf("%d %d ", a[posa--], a[posb++]);
        else printf("%d %d ", a[posb++], a[posa--]);
    }

    return 0;
}