#include <bits/stdc++.h>

using namespace std;

string a;
int l;
int s[3];
vector<string> v;

void f(int pos, int ni)
{
    if(pos==2)
    {
        string tmp1 = a.substr(0, s[0]+1), tmp2 = a.substr(s[0]+1, s[1]-s[0]), tmp3 = a.substr(s[1]+1, l-s[1]-1);
        reverse(tmp1.begin(), tmp1.end());
        reverse(tmp2.begin(), tmp2.end());
        reverse(tmp3.begin(), tmp3.end());
        v.push_back(tmp1+tmp2+tmp3);
        return;
    }
    for(int i=ni;i<l-1;i++)
    {
        s[pos] = i;
        f(pos+1, i+1);
    }
}

int main()
{
    cin >> a;
    l = a.length();
    f(0, 0);
    sort(v.begin(), v.end());
    cout << v[0];

    return 0;
}