#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, cnt = 0;
    scanf("%d", &a);
    a=1000-a;
    while(a)
    {
        if(a>=500)
        {
            a-=500;
            cnt++;
            continue;
        }
        if(a>=100)
        {
            a-=100;
            cnt++;
            continue;
        }
        if(a>=50)
        {
            a-=50;
            cnt++;
            continue;
        }
        if(a>=10)
        {
            a-=10;
            cnt++;
            continue;
        }
        if(a>=5)
        {
            a-=5;
            cnt++;
            continue;
        }
        if(a>=1)
        {
            a-=1;
            cnt++;
            continue;
        }
    }
    printf("%d", cnt);
    return 0;
}