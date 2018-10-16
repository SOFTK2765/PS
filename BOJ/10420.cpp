#include <bits/stdc++.h>

using namespace std;

const int md[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int ymd[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int n;
    scanf("%d", &n);
    int y = 2014, m = 4, d = 1;
    while(1)
    {
        if((y+1)%4==0 && n<366) break;
        else if((y+1)%4!=0 && n<365) break;
        if((y+1)%4==0) n -= 366;
        else n -= 365;
        y++;
    }
    while(1)
    {
        if(y%4!=0 && md[m]>n) break;
        else if(y%4==0 && ymd[m]>n) break;
        if(y%4!=0) n -= md[m];
        else n -= ymd[m];
        if(m==12) y++;
        m = m%12+1;
    }
    if(y%4!=0 && d+n>md[m])
    {
        d = (d+n)%md[m];
        m++;
        if(m==13)
        {
            m = 1;
            y++;
        }
    }
    else if(y%4==0 && d+n>ymd[m])
    {
        d = (d+n)%(ymd[m]+1);
        m++;
        if(m==13)
        {
            m = 1;
            y++;
        }
    }
    else d += n;
    printf("%d-%02d-%02d", y, m, d);

    return 0;
}