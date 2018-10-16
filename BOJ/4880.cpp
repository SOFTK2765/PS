#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a[3];
        for(int i=0;i<3;i++)
            scanf("%d ", &a[i]);
        if(a[0]==0 && a[1]==0 && a[2]==0) break;
        if(a[2]-a[1]==a[1]-a[0]) printf("AP %d\n", 2*a[2]-a[1]);
        else printf("GP %d\n", a[2]*a[2]/a[1]);
    }

    return 0;
}