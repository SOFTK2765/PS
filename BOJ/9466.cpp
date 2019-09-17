#include <bits/stdc++.h>

using namespace std;

int a[100001];
bool check[100001], ccheck[100001];
int tmpcheck[100001];

int dfs(int here, int s)
{
    check[here] = true;
    tmpcheck[here] = s;
    if(!check[a[here]])
    {
        int res = dfs(a[here], s);
        if(res==a[here]) return -1;
        if(res!=-1) ccheck[here] = true;
        return res;
    }
    if(tmpcheck[a[here]]==s)
    {
        ccheck[here] = true;
        return a[here];
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=1;i<=n;i++)
            scanf(" %d", &a[i]);
        memset(check, 0, sizeof(check));
        memset(ccheck, 0, sizeof(ccheck));
        for(int i=1;i<=n;i++)
            if(!check[i]) dfs(i, i);
        int cnt = 0;
        for(int i=1;i<=n;i++)
            if(!ccheck[i]) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}