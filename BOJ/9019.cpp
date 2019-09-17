#include <bits/stdc++.h>

using namespace std;

bool visit[10001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(visit, 0, sizeof(visit));
        int a, b;
        scanf(" %d %d", &a, &b);
        queue<pair<int, string>> bfs;
        bfs.push({a, ""});
        visit[a] = true;
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first;
                string h = bfs.front().second;
                bfs.pop();
                if(x==b)
                {
                    cout << h << endl;
                    flag = true;
                    break;
                }
                int nx = (x*2)%10000;
                if(!visit[nx])
                {
                    bfs.push({nx, h+"D"});
                    visit[nx] = true;
                }
                nx = (x+9999)%10000;
                if(!visit[nx])
                {
                    bfs.push({nx, h+"S"});
                    visit[nx] = true;
                }
                nx = (x%1000)*10+(x/1000);
                if(!visit[nx])
                {
                    bfs.push({nx, h+"L"});
                    visit[nx] = true;
                }
                nx = (x/10)+((x%10)*1000);
                if(!visit[nx])
                {
                    bfs.push({nx, h+"R"});
                    visit[nx] = true;
                }
            }
            if(flag) break;
        }
    }

    return 0;
}