#include <bits/stdc++.h>

using namespace std;

bool visit[100000];

int main()
{
    int n, t, g;
    scanf("%d %d %d", &n, &t, &g);
    queue<int> bfs;
    bfs.push(n);
    visit[n] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front();
            bfs.pop();
            if(x==g)
            {
                printf("%d", cnt);
                return 0;
            }
            int nx = x+1;
            if(nx<100000 && !visit[nx])
            {
                bfs.push(nx);
                visit[nx] = true;
            }
            nx = 2*x;
            if(nx<100000)
            {
                string tmp = to_string(nx);
                int l = tmp.length();
                for(int i=0;i<l;i++)
                    if(tmp[i]!='0')
                    {
                        tmp[i]--;
                        break;
                    }
                nx = atoi(tmp.c_str());
                if(!visit[nx])
                {
                    bfs.push(nx);
                    visit[nx] = true;
                }
            }
        }
        cnt++;
        if(cnt>t) break;
    }
    printf("ANG");

    return 0;
}