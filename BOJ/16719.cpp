#include <bits/stdc++.h>

using namespace std;

bool check[26];

int main()
{
    string a;
    cin >> a;
    int l = a.length();
    for(int i=0;i<l;i++)
        check[a[i]-'A'] = true;
    char s;
    for(int i=0;i<26;i++)
        if(check[i])
        {
            s = i+'A';
            break;
        }
    int pos;
    for(int i=0;i<l;i++)
        if(a[i]==s)
        {
            pos = i;
            break;
        }
    for(int i=0;i<l-pos;i++)
        cout << a.substr(pos, i+1) << endl;
    for(int i=0;i<pos;i++)
        cout << a.substr(pos-i-1, l-pos+i+1) << endl;

    return 0;
}