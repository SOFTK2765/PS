#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    map<string, vector<string>> mp;
    for(int i=0;i<n;i++)
    {
        string gn;
        int mcnt;
        cin >> gn >> mcnt;
        for(int j=0;j<mcnt;j++)
        {
            string tmp;
            cin >> tmp;
            mp[gn].push_back(tmp);
        }
    }
    for(map<string, vector<string>>::iterator it=mp.begin();it!=mp.end();it++)
        sort((it->second).begin(), (it->second).end());
    for(int i=0;i<m;i++)
    {
        string tmp;
        int mode;
        cin >> tmp >> mode;
        if(mode==0)
        {
            int s = mp[tmp].size();
            for(int j=0;j<s;j++)
                cout << mp[tmp][j] << endl;
        }
        else
        {
            bool flag = false;
            for(map<string, vector<string>>::iterator it=mp.begin();it!=mp.end();it++)
                {
                    for(int i=0;i<(it->second).size();i++)
                        if((it->second)[i]==tmp)
                        {
                            cout << it->first << endl;
                            flag = true;
                            break;
                        }
                    if(flag) break;
                }
        }
    }

    return 0;
}