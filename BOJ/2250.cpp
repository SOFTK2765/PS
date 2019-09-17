#include <bits/stdc++.h>

using namespace std;

int parent[10001];
vector<vector<int>> adj(10001), linfo(10001);
bool visit[10001];
int cnt;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second!=b.second) return a.second>b.second;
    return a.first<b.first;
}

int findparent(int pos)
{
    if(parent[pos]==0) return pos;
    else findparent(parent[pos]);
}

bool dfs(int pos, int lev)
{
    visit[pos] = true;
    if(adj[pos][0]!=-1) dfs(adj[pos][0], lev+1);
    linfo[lev].push_back(cnt++);
    if(adj[pos][1]!=-1) dfs(adj[pos][1], lev+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back(tmp2);
        adj[tmp1].push_back(tmp3);
        parent[tmp2] = parent[tmp3] = tmp1;
    }
    int rt = findparent(1);
    dfs(rt, 1);
    vector<pair<int, int>> v;
    for(int i=1;!linfo[i].empty() && i<=10000;i++)
        v.push_back({i, linfo[i][linfo[i].size()-1]-linfo[i][0]+1});
    sort(v.begin(), v.end(), cmp);
    printf("%d %d", v[0].first, v[0].second);

    return 0;
}
