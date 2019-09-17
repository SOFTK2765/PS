#include <bits/stdc++.h>

using namespace std;

string n;
int l;
map<string, bool> mp;

int f(int left, int right, string now, string history)
{
    if(right-left-1==l)
    {
        if(mp[history]) return 0;
        else
        {
            mp[history] = true;
            return 1;
        }
    }
    int res = 0;
    if(left>=0) res += f(left-1, right, n.substr(left, right-left), history+n.substr(left, right-left)+"-");
    if(right<l) res += f(left, right+1, n.substr(left+1, right-left), history+n.substr(left+1, right-left)+"-");

    return res;
}

int main()
{
    cin >> n;
    l = n.length();
    int res = 0;
    for(int i=0;i<l;i++)
        res += f(i-1, i+1, n.substr(i, 1), n.substr(i, 1)+"-");
    printf("%d", res);

    return 0;
}