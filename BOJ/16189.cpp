#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    int l = s.length();
    bool flag = false;
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            flag = true;
            break;
        }
    }
    printf("%s", flag?"NO":"YES");

    return 0;
}