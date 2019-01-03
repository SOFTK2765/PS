#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, m, d, n;
    scanf("%4d%*1c%2d%*1c%2d %d", &y, &m, &d, &n);
    for(int i=1;i<n;i++)
    {
        if(((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d==31) || ((m==4 || m==6 || m==9 || m==11) && d==30) || (m==2 && ((y%4==0 && (y%100!=0 || y%400==0) && d==29) || (!(y%4==0 && (y%100!=0 || y%400==0)) && d==28))))
        {
            if(m==12) y++;
            m = m%12+1;
            d = 1;
        }
        else d++;
    }
    printf("%d-%02d-%02d", y, m, d);

    return 0;
}