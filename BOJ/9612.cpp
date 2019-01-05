#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    if(a.second!=b.second) return a.second>b.second;
    return a.first>b.first;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<string, int>> v;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin >> tmp;
        int size = v.size();
        bool flag = false;
        for(int j=0;j<size;j++)
            if(v[j].first==tmp)
            {
                flag = true;
                v[j].second++;
            }
        if(!flag) v.push_back({tmp, 1});
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << " " << v[0].second;

    return 0;
}