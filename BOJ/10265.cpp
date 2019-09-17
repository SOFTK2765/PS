#include <bits/stdc++.h>

using namespace std;

int a[1001];
pair<pair<int, int>, int> mem[1001];
bool visit[1001], finished[1001];
pair<int, int> dp[1001][1001];
bool flag;
map<int, int> mp;

void dfs(int x)
{
    if(mem[x].first.first!=-1)
    {
        flag = true;
        return;
    }
    visit[x] = true;
    if(!visit[a[x]] || (visit[a[x]] && finished[a[x]]))
    {
        dfs(a[x]);
        if(mem[a[x]].second==a[x]) flag = true;
        mp[mem[a[x]].second]++;
        mem[x].first.first = mem[a[x]].first.first+(flag?1:0);
        mem[x].first.second = mem[a[x]].first.second;
        mem[x].second = mem[a[x]].second;
    }
    else if(visit[a[x]] && !finished[a[x]])
    {
        int tmp = a[x];
        mp[a[x]] = 0;
        while(tmp!=x)
        {
            mem[x].first.second++;
            tmp = a[tmp];
        }
        mp[a[x]]++;
        mem[x].first.second++;
        mem[x].first.first = 0;
        mem[x].second = a[x];
    }
    finished[x] = true;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++)
    {
        scanf(" %d", &a[i]);
        mem[i].first.first = -1;
    }
    int sum = 0;
    for(int i=1;i<=n;i++)
        if(!visit[i])
        {
            flag = false;
            dfs(i);
        }
    vector<pair<int, int>> v;
    for(map<int, int>::iterator it=mp.begin();it!=mp.end();it++)
        v.push_back({mem[(*it).first].first.second, (*it).second-mem[(*it).first].first.second});
    sort(v.begin(), v.end());
    int size = v.size();
    for(int i=1;i<=size;i++)
    {
        for(int j=0;j<=k;j++)
        {
            dp[i][j].first = dp[i-1][j].first;
            dp[i][j].second = dp[i-1][j].second;
            if(j-v[i-1].first>=0 && dp[i-1][j-v[i-1].first].first+dp[i-1][j-v[i-1].first].second+v[i-1].first+v[i-1].second>dp[i][j].first+dp[i][j].second)
            {
                dp[i][j].first = dp[i-1][j-v[i-1].first].first+v[i-1].first;
                dp[i][j].second = dp[i-1][j-v[i-1].first].second+v[i-1].second;
            }
        }
    }
    printf("%d", dp[size][k].first+dp[size][k].second>k?k:dp[size][k].first+dp[size][k].second);

    return 0;
}