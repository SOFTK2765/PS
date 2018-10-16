#include <bits/stdc++.h>

using namespace std;

vector<int> adj[501];
bool check[501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    queue<int> q;
    int size = adj[1].size();
    for(int i=0;i<size;i++)
    {
        q.push(adj[1][i]);
        check[adj[1][i]] = true;
    }
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        int size = adj[f].size();
        for(int i=0;i<size;i++)
            check[adj[f][i]] = true;
    }
    int cnt = 0;
    for(int i=2;i<=n;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}