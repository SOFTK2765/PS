#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    bool flag = false;
    int rcnt = 0, lcnt = 0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(') flag = true;
        if(s[i]=='@')
        {
            if(flag) rcnt++;
            else lcnt++;
        }
    }
    printf("%d %d", lcnt, rcnt);

    return 0;
}