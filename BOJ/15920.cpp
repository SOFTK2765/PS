#include <bits/stdc++.h>

using namespace std;

char a[11];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int d = 5, t = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='P')
        {
            d = d==1?5:1;
            if(t==1) d = 6;
        }
        else if(a[i]=='W') t++;
        if(t==2) break;
    }
    if(t<2) d = 0;
    printf("%d", d);

    return 0;
}