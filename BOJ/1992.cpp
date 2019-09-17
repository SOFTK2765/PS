#include <bits/stdc++.h>

using namespace std;

char a[65][65];

string f(int n, int x, int y)
{
    string res = "";
    bool flag = false;
    for(int i=y;i<y+n/2;i++)
    {
        for(int j=x;j<x+n/2;j++)
            if(a[i][j]!=a[y][x])
            {
                res += f(n/2, x, y);
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) res += a[y][x];
    flag = false;
    for(int i=y;i<y+n/2;i++)
    {
        for(int j=x+n/2;j<x+n;j++)
            if(a[i][j]!=a[y][x+n/2])
            {
                res += f(n/2, x+n/2, y);
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) res += a[y][x+n/2];
    flag = false;
    for(int i=y+n/2;i<y+n;i++)
    {
        for(int j=x;j<x+n/2;j++)
            if(a[i][j]!=a[y+n/2][x])
            {
                res += f(n/2, x, y+n/2);
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) res += a[y+n/2][x];
    flag = false;
    for(int i=y+n/2;i<y+n;i++)
    {
        for(int j=x+n/2;j<x+n;j++)
            if(a[i][j]!=a[y+n/2][x+n/2])
            {
                res += f(n/2, x+n/2, y+n/2);
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) res += a[y+n/2][x+n/2];
    if(res.length()==4 && res[0]==res[1] && res[1]==res[2] && res[2]==res[3]) res = res.substr(0, 1);
    else res = "("+res+")";

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    cout << f(n, 0, 0);

    return 0;
}