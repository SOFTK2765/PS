#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[101];
bool check[101];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=0;tc<t;tc++)
    {
        memset(check, 0, sizeof(check));
        int n, hx, hy;
        scanf(" %d %d %d", &n, &hx, &hy);
        for(int i=0;i<n;i++)
            scanf(" %d %d", &a[i].first, &a[i].second);
        int rx, ry;
        scanf(" %d %d", &rx, &ry);
        queue<pair<int, int>> bfs;
        bfs.push({hx, hy});
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                for(int i=0;i<n;i++)
                {
                    if(abs(rx-x)+abs(ry-y)<1000) flag = true;
                    if(check[i] || abs(a[i].first-x)+abs(a[i].second-y)>=1000) continue;
                    check[i] = true;
                    bfs.push({a[i].first, a[i].second});
                }
            }
        }
        printf("%s", flag?"happy\n":"sad\n");
    }

    return 0;
}