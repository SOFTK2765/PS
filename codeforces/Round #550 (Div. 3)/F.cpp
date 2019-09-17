#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200001], cnt[200001];
bool check[200001], dcheck[200001];

bool cmp(const pair<int, int> &a, const pair<int, int> &b){return a.first>b.first;};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        scanf(" %d %d", &a[i].first, &a[i].second);
        adj[a[i].first].push_back(a[i].second);
        adj[a[i].second].push_back(a[i].first);
    }
    if(n==2)
    {
        printf("YES\n1");
        return 0;
    }
    bool flag = false;
    int s = 0;
    for(int i=1;i<=n;i++)
    {
        cnt[i].first = adj[i].size();
        cnt[i].second = i;
    }
    sort(cnt+1, cnt+n+1, cmp);
    for(int i=0;i<n;i++)
    {
        int size = adj[cnt[i].second].size();
        if(adj[cnt[i].second].size()==1) break;
        dcheck[cnt[i].second] = true;
        for(int j=0;j<size;j++)
        {
            if(dcheck[adj[cnt[i].second][j]])
            {
                printf("NO");
                return 0;
            }
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        int size = adj[i].size()
        if(adj[i].size()==1) break;
        dcheck[i] = true;
    }
    dcheck[i] = true;
    for(int i=1;i<=n;i++)
    {
        int size = adj[i].size();
        if(size!=1)
        {
            if(flag)
            {
                printf("NO");
                return 0;
            }
            flag = true;
            s = i;
        }
    }
    printf("YES\n");
    for(int i=0;i<m;i++)
        printf("%d", a[i].first==s?1:0);

    return 0;
}