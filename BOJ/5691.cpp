#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a[2];
        scanf(" %d %d", &a[0], &a[1]);
        if(a[0]==0 && a[1]==0) break;
        sort(a, a+2);
        printf("%d\n", 2*a[0]-a[1]);
    }

    return 0;
}