#include <bits/stdc++.h>

using namespace std;

pair<int, pair<int, int>> a[200001];
int csum[200001], sum[200001], res[200001];

bool cmp(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if(a.second.second!=b.second.second) return a.second.second<b.second.second;
    if(a.second.first!=b.second.first) return a.second.first<b.second.first;
    return a.first<b.first;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d %d", &a[i].second.first, &a[i].second.second);
        a[i].first = i;
    }
    sort(a, a+n, cmp);
    for(int i=0;i<n;i++)
        sum[i+1] = sum[i]+a[i].second.second;
    int tmp = 0, si = 0;
    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        if(tmp!=a[i].second.second)
        {
            tmp = a[i].second.second;
            si = i;
            for(map<int, int>::iterator it=mp.begin();it!=mp.end();it++)
                csum[it->first] += it->second;
            mp.clear();
        }
        res[a[i].first] = sum[si]-csum[a[i].second.first];
        if(mp.find(a[i].second.first)==mp.end()) mp[a[i].second.first] = a[i].second.second;
        else mp[a[i].second.first] += a[i].second.second;
    }
    for(int i=0;i<n;i++)
        printf("%d\n", res[i]);

    return 0;
}