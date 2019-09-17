#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(901);
vector<int> group;
bool check[901];

int k;

int main()
{
    int n, f;
    scanf("%d %d %d", &k, &n, &f);
    for(int i=0;i<f;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    queue<int> bfs;
    for(int i=1;i<=n;i++)
    {
        bfs.push(i);
        

    }
    if(!flag) printf("-1");

    return 0;
}