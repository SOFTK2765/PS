#include <bits/stdc++.h>

using namespace std;

int w[10001];
bool visit[10001];
vector<vector<int>> adj(10001);

int f(int pos, bool check, bool pcheck)
{
    int adjsize = adj[pos].size(), res = 0;
    if(check) res = w[pos];
    for(int i=0;i<adjsize;i++)
    {
        if(!visit[adj[pos][i]])
        {
            visit[adj[pos][i]] = true;
            if(check) res += f(adj[pos][i], false, check);
            else if(!pcheck) res += f(adj[pos][i], true, check);
            else res += max(f(adj[pos][i], true, check), f(adj[pos][i], false, check));
            visit[adj[pos][i]] = false;
        }
    }
    cout << res << endl;
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &w[i]);
    for(int i=0;i<n-1;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    printf("%d", max(f(1, true, false), f(1, false, false)));

    return 0;
}