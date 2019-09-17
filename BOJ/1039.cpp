#include <bits/stdc++.h>

using namespace std;

bool visit[1000001][2];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if(n<10)
    {
        if(k==0) printf("%d", n);
        else printf("-1");
        return 0;
    }
    queue<int> bfs;
    bfs.push(n);
    int cnt = 0;
    while(!bfs.empty())
    {
        if(cnt==k) break;
        cnt++;
        int size = bfs.size();
        while(size--)
        {
            string x = to_string(bfs.front());
            bfs.pop();
            int l = x.length();
            for(int i=0;i<l;i++)
                for(int j=i+1;j<l;j++)
                {
                    if(i==0 && x[j]=='0') continue;
                    string tmp = x;
                    swap(tmp[i], tmp[j]);
                    int nx = atoi(tmp.c_str());
                    if(visit[nx][cnt%2]) continue;
                    bfs.push(nx);
                    visit[nx][cnt%2] = true;
                }
        }
    }
    bool flag = false;
        for(int i=1000000;i>=0;i--)
            if(visit[i][k%2])
            {
                printf("%d", i);
                flag = true;
                break;
            }
    if(!flag) printf("-1");

    return 0;
}