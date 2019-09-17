#include <bits/stdc++.h>

using namespace std;

bool pncheck[10001], visit[10001];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=3;i*i<10000;i++)
        for(int j=i+i;j<10000;j+=i)
            pncheck[j] = true;
    for(int i=1000;i<10000;i+=2)
        pncheck[i] = true;
    for(int i=0;i<1000;i++)
        pncheck[i] = true;
    while(t--)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        memset(visit, 0, sizeof(visit));
        queue<string> bfs;
        bfs.push(to_string(a));
        visit[a] = true;
        int cnt = 0;
        bool flag = false;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                string x = bfs.front();
                bfs.pop();
                if(atoi(x.c_str())==b)
                {
                    printf("%d\n", cnt);
                    flag = true;
                    break;
                }
                for(int i=0;i<4;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        string nx = x;
                        nx[i] = j+'0';
                        int nxint = atoi(nx.c_str());
                        if(pncheck[nxint] || visit[nxint]) continue;
                        bfs.push(nx);
                        visit[nxint] = true;
                    }
                }
            }
            if(flag) break;
            cnt++;
        }
        if(!flag) printf("Impossible\n");
    }

    return 0;
}