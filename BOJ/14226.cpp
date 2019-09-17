#include <bits/stdc++.h>

using namespace std;

bool visit[2001][2001];

int main()
{
    int s;
    scanf("%d", &s);
    queue<pair<int, int>> bfs;
    bfs.push({1, 0});
    visit[1][0] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int n = bfs.front().first, copy = bfs.front().second;
            bfs.pop();
            if(!visit[n][n])
            {
                bfs.push({n, n});
                visit[n][n] = true;
            }
            if(n==s)
            {
                printf("%d", cnt);
                return 0;
            }
            if(0<n-1 && !visit[n-1][copy])
            {
                bfs.push({n-1, copy});
                visit[n-1][copy] = true;
            }
            if(n+copy<s*2 && !visit[n+copy][copy])
            {
                bfs.push({n+copy, copy});
                visit[n+copy][copy] = true;
            }
        }
        cnt++;
    }

    return 0;
}