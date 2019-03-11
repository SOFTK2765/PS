#include <bits/stdc++.h>

using namespace std;

bool check[2001][2001];

int main()
{
    int a, b, c, d, ta, tb, tc, td;
    cin >> a >> b >> c >> d >> ta >> tb >> tc >> td;
    if(ta<a && c<tc)
    {
        if(b<tb && tb<d && d<=td) d = tb;
        if(b<td && td<d && tb<=b) b = td;
    }
    if(tb<b && d<td)
    {
        if(a<ta && ta<c && c<=tc) c = ta;
        if(a<tc && tc<c && ta<=a) a = tc;
    }
    cout << (c-a)*(d-b);

    return 0;
}