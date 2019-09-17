#include <bits/stdc++.h>

using namespace std;

bool visit[1000001];

int main()
{
    int f, s, g, u, d;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
    queue<int> bfs;
    bfs.push(s);
    visit[s] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int here = bfs.front();
            bfs.pop();
            if(here==g)
            {
                printf("%d", cnt);
                return 0;
            }
            if(here+u<=f && !visit[here+u])
            {
                bfs.push(here+u);
                visit[here+u] = true;
            }
            if(here-d>=1 && !visit[here-d])
            {
                bfs.push(here-d);
                visit[here-d] = true;
            }
        }
        cnt++;
    }
    printf("use the stairs");

    return 0;
}