#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        vector<vector<int>> adj(n+1);
        for(int i=0;i<m;i++)
        {
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            adj[tmp1].push_back(tmp2);
            adj[tmp2].push_back(tmp1);
        }
    }

    return 0;
}