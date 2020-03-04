#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> v(n+1);
    for(int i=1;i<=n;i++)
    {
        int nn;
        scanf(" %d", &nn);
        for(int j=0;j<nn;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            v[tmp].push_back(i);
        }
        for(int j=0;j<nn;j++)
    }

    return 0;
}