#include <bits/stdc++.h>

using namespace std;

bool check[101];

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    vector<int> v[101];
    for(int i=0;i<t;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    check[1] = true;
    while(!q.empty())
    {
        int num = q.front(), size = v[num].size();
        q.pop();
        for(int i=0;i<size;i++)
            if(!check[v[num][i]])
            {
                q.push(v[num][i]);
                check[v[num][i]] = true;
            }
    }
    int cnt = 0;
    for(int i=2;i<=n;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}