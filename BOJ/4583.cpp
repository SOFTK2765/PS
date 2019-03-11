#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> mp;
    mp['b'] = 'd';
    mp['d'] = 'b';
    mp['p'] = 'q';
    mp['q'] = 'p';
    mp['i'] = 'i';
    mp['o'] = 'o';
    mp['v'] = 'v';
    mp['w'] = 'w';
    mp['x'] = 'x';
    while(1)
    {
        string a;
        cin >> a;
        if(a=="#") break;
        int l = a.length();
        string res = "";
        bool flag = false;
        for(int i=l-1;i>=0;i--)
            if(mp[a[i]]) res += mp[a[i]];
            else
            {
                flag = true;
                break;
            }
        printf("%s\n", flag?"INVALID":res.c_str());
    }

    return 0;
}