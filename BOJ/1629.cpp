#include <bits/stdc++.h>

using namespace std;

int bb[40];
long long br[40];

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(b==0)
    {
        printf("%d", 1);
        return 0;
    }
    br[0] = a;
    int pos = 0;
    long long res = 1;
    while(b>0)
    {
        bb[pos++] = b%2;
        b /= 2;
    }
    for(int i=1;i<pos;i++)
        br[i] = ((br[i-1]%c)*(br[i-1]%c))%c;
    for(int i=0;i<pos;i++)
        if(bb[i]) res = ((res%c)*(br[i]%c))%c;
    printf("%lld", res);

    return 0;
}