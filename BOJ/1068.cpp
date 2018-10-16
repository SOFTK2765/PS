#include <bits/stdc++.h>

using namespace std;

int a[51];
bool check[51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int k;
    scanf(" %d", &k);
    vector<int> v[51];
    for(int i=0;i<n;i++)
        if(a[i]!=-1 && i!=k) v[a[i]].push_back(i);
    queue<int> q;
    q.push(k);
    if(a[k]==-1)
    {
        printf("%d", 0);
        return 0;
    }
    int size = v[a[k]].size();
    for(int i=0;i<size;i++)
        if(v[a[k]][i]==k) v[a[k]].erase(v[a[k]].begin()+i);
    while(!q.empty())
    {
        int num = q.front(), size = v[num].size();
        q.pop();
        for(int i=0;i<size;i++)
            if(!check[v[num][i]])
            {
                check[v[num][i]] = true;
                q.push(v[num][i]);
            }
        while(size--) v[num].pop_back();
    }
    size = v[0].size();
    for(int i=0;i<size;i++)
        q.push(v[0][i]);
    int cnt = 0;
    memset(check, 0, sizeof(check));
    while(!q.empty())
    {
        int num = q.front(), size = v[num].size();
        q.pop();
        if(size==0) cnt++;
        for(int i=0;i<size;i++)
            if(!check[v[num][i]])
            {
                check[v[num][i]] = true;
                q.push(v[num][i]);
            }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].size()!=0)
        {
            printf("%d", cnt);
            return 0;
        }
    }
    printf("%d", 1);

    return 0;
}