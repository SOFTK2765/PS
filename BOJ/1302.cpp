#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    map<string, int> mp;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    int mx = 0;
    string res = "";
    for(map<string, int>::iterator it=mp.begin();it!=mp.end();it++)
        if(mx<it->second)
        {
            mx = it->second;
            res = it->first;
        }
    cout << res;

    return 0;
}