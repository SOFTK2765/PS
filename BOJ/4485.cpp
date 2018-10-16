#include <bits/stdc++.h>

#define INF 98764321

using namespace std;

int n;
int a[126][126], d[126][126];

void dijk()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            d[i][j] = INF;
    d[0][0] = a[0][0];
    queue<pair<int, pair<int, int>>> q;
    q.push({a[0][0], {0, 0}});
    while(!q.empty())
    {
        int herex = q.front().second.first, herey = q.front().second.second, dist = q.front().first;
        q.pop();
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int cost = a[i][j];
                if(dist+cost<d[i][j])
                {
                    d[i][j] = dist+cost;
                    q.push({d[i][j], {j, i}});
                } 
            }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ", d[i][j]);
        printf("\n");
    }
}

int main()
{
    int t = 0;
    while(++t)
    {
        scanf("%d", &n);
        if(n==0) break;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf(" %d", &a[i][j]);
        dijk();
        printf("Problem %d: %d\n", t, d[n-1][n-1]);
    }

    return 0;
}