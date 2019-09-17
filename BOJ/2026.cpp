#include <bits/stdc++.h>

using namespace std;

pair<int, int> info[5601];
vector<vector<int>> adj(901);
vector<int> group;
bool check[901], fcheck[901];

int k;

bool func(int captain)
{
    if(group.size()==k)
    {
        for(int i=1;i<k;i++)
        {
            memset(fcheck, 0, sizeof(fcheck));
            fcheck[group[i]] = true;
            int size = adj[group[i]].size();
            for(int j=0;j<size;j++)
                fcheck[adj[group[i]][j]] = true;
            int cnt = 0;
            for(int j=0;j<k;j++)
                if(fcheck[group[j]]) cnt++;
            if(cnt!=k) return false;
        }
        sort(group.begin(), group.end());
        for(int i=0;i<k;i++)
            printf("%d\n", group[i]);
        return true;
    }
    int size = adj[captain].size();
    for(int i=0;i<size;i++)
    {
        if(!check[adj[captain][i]])
        {
            check[adj[captain][i]] = true;
            group.push_back(adj[captain][i]);
            if(func(captain)) return true;
            group.pop_back();       
            check[adj[captain][i]] = false;
        }
    }
    return false;
}

int main()
{
    int n, f;
    scanf("%d %d %d", &k, &n, &f);
    for(int i=0;i<f;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        if(tmp1>tmp2) swap(tmp1, tmp2);
        info[i].first = tmp1;
        info[i].second = tmp2;
    }
    sort(info, info+f);
    for(int i=0;i<f;i++)
    {
        if(!binary_search(adj[info[i].first].begin(), adj[info[i].first].end(), info[i].second))
        {
            adj[info[i].first].push_back(info[i].second);
            adj[info[i].second].push_back(info[i].first);
        }
    }
    bool flag = false;
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()>=k-1)
        {
            group.push_back(i);
            flag = func(i);
            if(flag) break;
            group.pop_back();
        }
    }
    if(!flag) printf("-1");

    return 0;
}