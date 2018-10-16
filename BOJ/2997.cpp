#include <bits/stdc++.h>

using namespace std;

int a[3];

int main()
{
    for(int i=0;i<3;i++)
        scanf("%d ", &a[i]);
    sort(a, a+3);
    int tmp1 = a[1]-a[0], tmp2 = a[2]-a[1];
    if(tmp1>tmp2) printf("%d", a[0]+tmp2);
    else if(tmp1<tmp2) printf("%d", a[1]+tmp1);
    else
    {
        if(a[2]+tmp1>100) printf("%d", a[0]-tmp1);
        else printf("%d", a[2]+tmp1);
    }

    return 0;
}