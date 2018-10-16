#include <bits/stdc++.h>

using namespace std;

int pos[26];

int main()
{
    string a;
    memset(pos, -1, sizeof(pos));
    cin >> a;
    int ind = 0;
    for(string::iterator iter=a.begin();iter!=a.end();iter++, ind++)
        if(pos[*iter-'a']==-1) pos[*iter-'a'] = ind;
    for(int i=0;i<26;i++)
        cout << pos[i] << " ";

    return 0;
}