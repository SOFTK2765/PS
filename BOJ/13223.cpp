#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    scanf("%2d%*1c%2d%*1c%2d%2d%*1c%2d%*1c%2d", &h1, &m1, &s1, &h2, &m2, &s2);
    int rh = 0, rm = 0, rs = 0;
    while(1)
    {
        rs++;
        if(rs==60)
        {
            rs = 0;
            rm++;
        }
        if(rm==60)
        {
            rm = 0;
            rh++;
        }
        s1++;
        if(s1==60)
        {
            s1 = 0;
            m1++;
        }
        if(m1==60)
        {
            m1 = 0;
            h1++;
        }
        if(h1==24) h1 = 0;
        if(h1==h2 && m1==m2 && s1==s2) break;
    }
    printf("%02d:%02d:%02d", rh, rm, rs);

    return 0;
}