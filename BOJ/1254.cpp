#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    if(l==1) printf("%d", 1);
    int mn = 987654321;
    for(int i=l/2;i<l;i++)
    {
        int d = 0;
        while(i+d<l)
        {
            if(a[i-d]!=a[i+d]) break;
            d++;
        }
        if(i+d==l && mn>(i+1)*2-1) mn = (i+1)*2-1;
        d = 0;
        while(i+d<l)
        {
            if(a[i-d-1]!=a[i+d]) break;
            d++;
        }
        if(i+d==l && mn>i*2) mn = i*2;
    }
    if(l!=1) printf("%d\n", mn);

    return 0;
}