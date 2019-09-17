#include <bits/stdc++.h>

using namespace std;

int a[9], tmp[9], ttmp[9];
set<unsigned int> visit;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    unsigned int s = 0;
    for(int i=0;i<n;i++)
    {
        s <<= 4;
        s += a[i];
    }
    queue<unsigned int> bfs;
    bfs.push(s);
    visit.insert(s);
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            unsigned int x = bfs.front();
            bfs.pop();
            for(int i=0;i<n;i++)
                tmp[i] = (x>>(4*(n-i-1)))%16;
            for(int i=0;i<n;i++)
            {
                if(tmp[i]!=i+1) break;
                if(i==n-1)
                {
                    printf("%d", cnt);
                    return 0;
                }
            }
            for(int i=0;i<n-k+1;i++)
            {
                for(int j=0;j<n;j++)
                    ttmp[j] = tmp[j];
                reverse(ttmp+i, ttmp+i+k);
                unsigned int tmps = 0;
                for(int j=0;j<n;j++)
                {
                    tmps <<= 4;
                    tmps += ttmp[j];
                }
                if(visit.find(tmps)!=visit.end()) continue;
                bfs.push(tmps);
                visit.insert(tmps);
            }
        }
        cnt++;
    }
    printf("%d", -1);

    return 0;
}