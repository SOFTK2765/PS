#include <bits/stdc++.h>

using namespace std;

string a[10001];

int main()
{
    int n;
    scanf("%d ", &n);
    map<string, int> mp;
    for(int i=0;i<n;i++)
        getline(cin, a[i]);
    sort(a, a+n);
    for(int i=0;i<n;i++)
    {
        getline(cin, a);
        int l = a.length(), pre = 0, mx = 0;
        bool nflag = false;
        for(int j=0;j<l;j++)
        {
            if(a[j]==' ')
            {
                if(nflag)
                {
                    string tmp = a.substr(pre, j-pre);
                    mp[tmp]++;
                }
                pre = j+1;
                nflag = true;
            }
        }
        string tmp = a.substr(pre, l-pre);
        mp[tmp]++;
    }
    bool flag = false;
    vector<pair<int, string>> v;
    for(map<string, int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
        if((it->second)!=1)
        {
            flag = true;
            v.push_back({it->second, (it->first).c_str()});
        }
    }
    if(!flag) printf("ALL CLEAR");
    else
    {
        sort(v.begin(), v.end());
        int size = v.size();
        for(int i=0;i<size;i++)
            printf("%s\n", v[i].second.c_str());
    }

    return 0;
}