#include <bits/stdc++.h>

using namespace std;

int cnt[501];
bool check[501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> v1[n], v2[n];
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        v1[tmp1-1].push_back(tmp2-1);
        v2[tmp2-1].push_back(tmp1-1);
    }
    for(int i=0;i<n;i++)
    {
        memset(check, 0, sizeof(check));
        queue<int> q;
        int size = v1[i].size();
        for(int j=0;j<size;j++)
        {
            q.push(v1[i][j]);
            check[v1[i][j]] = true;
        }
        while(!q.empty())
        {
            int size = q.size();
            cnt[i] += size;
            while(size--)
            {
                int tmp = q.front();
                q.pop();
                int tsize = v1[tmp].size();
                for(int j=0;j<tsize;j++)
                {
                    if(check[v1[tmp][j]]) continue;
                    q.push(v1[tmp][j]);
                    check[v1[tmp][j]] = true;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        memset(check, 0, sizeof(check));
        queue<int> q;
        int size = v2[i].size();
        for(int j=0;j<size;j++)
        {
            q.push(v2[i][j]);
            check[v2[i][j]] = true;
        }
        while(!q.empty())
        {
            int size = q.size();
            cnt[i] += size;
            while(size--)
            {
                int tmp = q.front();
                q.pop();
                int tsize = v2[tmp].size();
                for(int j=0;j<tsize;j++)
                {
                    if(check[v2[tmp][j]]) continue;
                    q.push(v2[tmp][j]);
                    check[v2[tmp][j]] = true;
                }
            }
        }
    }
    int res = 0;
    for(int i=0;i<n;i++)
        if(cnt[i]==n-1) res++;
    printf("%d", res);

    return 0;
}