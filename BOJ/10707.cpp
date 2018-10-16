#include <bits/stdc++.h>

using namespace std;

int a[5];

int main()
{
    for(int i=0;i<5;i++)
        scanf(" %d", &a[i]);
    if(a[2]<a[4])
    {
        if(a[0]*a[4]<a[1]+((a[4]-a[2])*a[3])) printf("%d", a[0]*a[4]);
        else printf("%d", a[1]+((a[4]-a[2])*a[3]));
    }
    else
    {
        if(a[0]*a[4]<a[1]) printf("%d", a[0]*a[4]);
        else printf("%d", a[1]);
    }

    return 0;
}