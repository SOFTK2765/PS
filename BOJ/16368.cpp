#include <bits/stdc++.h>

using namespace std;

int wi[2001], s[2001];
int check[2001][2001], rest[2001][2001];

int main()
{
    int m, n, w, h;
    scanf("%d %d %d %d", &m, &n, &w, &h);
    for(int i=0;i<m;i++)
        scanf(" %d", &wi[i]);
    for(int i=0;i<n;i++)
        scanf(" %d", &s[i]);
    vector<vector<int>> sp(m+1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(check[j][i]==1) s[i]--;
        if(s[i]<0)
        {
            printf("-1");
            return 0;
        }
        priority_queue<pair<int, int>> pq;
        for(int j=0;j<m;j++)
            if(check[j][i]==0 && ((i-1>=0 && rest[j][i-1]>=h) || i==0)) pq.push({wi[j], j});
        while(s[i])
        {
            if(pq.empty())
            {
                printf("-1");
                return 0;
            }
            int p = pq.top().second;
            pq.pop();
            s[i]--;
            for(int j=0;j<w;j++)
                check[p][i+j] = 1;
            sp[p+1].push_back(i+1);
            wi[p] -= w;
            if(wi[p]<0)
            {
                printf("-1");
                return 0;
            }
        }
        for(int j=0;j<m;j++)
            if(check[j][i]==0 && i-1>=0) rest[j][i] = rest[j][i-1]+1;
            else if(check[j][i]==0 && i==0) rest[j][i] = 1;
        if(s[i]!=0)
        {
            printf("-1");
            return 0;
        }
    }
    printf("1\n");
    for(int i=1;i<=m;i++)
    {
        printf("%d ", i);
        int size = sp[i].size();
        for(int j=1;j<size;j++)
            printf("%d ", sp[i][j]);
        printf("\n");
    }

    return 0;
}