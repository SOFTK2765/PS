#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    map<string, pair<bool, bool>> mp;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin >> tmp;
        mp[tmp].first = true;
    }
    for(int i=0;i<m;i++)
    {
        string tmp;
        cin >> tmp;
        mp[tmp].second = true;
    }
    vector<string> v;
    for(map<string, pair<bool, bool>>::iterator it=mp.begin();it!=mp.end();it++)
        if(it->second.first && it->second.second) v.push_back(it->first);
    sort(v.begin(), v.end());
    int size = v.size();
    cout << size << endl;
    for(int i=0;i<size;i++)
        cout << v[i] << endl;

    return 0;
}