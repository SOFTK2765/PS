#include <bits/stdc++.h>

using namespace std;

bool visit[100001] = {};

int main()
{
    int a, b, n, m;
    scanf("%d %d %d %d", &a, &b, &n, &m);
    queue<int> bfs;
    bfs.push(n);
    visit[n] = true;
    int cnt = 0;
    while(1)
    {
        int size = bfs.size();
        while(size--)
        {
            int nn = bfs.front();
            if(nn==m) goto end;
            bfs.pop();
            if(nn+1>=0 && nn+1<=100000 && visit[nn+1]==false){bfs.push(nn+1);visit[nn+1] = true;}
            if(nn-1>=0 && nn-1<=100000 && visit[nn-1]==false){bfs.push(nn-1);visit[nn-1] = true;}
            if(nn+a>=0 && nn+a<=100000 && visit[nn+a]==false){bfs.push(nn+a);visit[nn+a] = true;}
            if(nn+b>=0 && nn+b<=100000 && visit[nn+b]==false){bfs.push(nn+b);visit[nn+b] = true;}
            if(nn-a>=0 && nn-a<=100000 && visit[nn-a]==false){bfs.push(nn-a);visit[nn-a] = true;}
            if(nn-b>=0 && nn-b<=100000 && visit[nn-b]==false){bfs.push(nn-b);visit[nn-b] = true;}
            if(nn*a>=0 && nn*a<=100000 && visit[nn*a]==false){bfs.push(nn*a);visit[nn*a] = true;}
            if(nn*b>=0 && nn*b<=100000 && visit[nn*b]==false){bfs.push(nn*b);visit[nn*b] = true;}
        }
        cnt++;
    }
    end:
    printf("%d", cnt);

    return 0;
}