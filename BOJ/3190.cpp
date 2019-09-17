#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    set<pair<int, int>> bst;
    for(int i=0;i<k;i++)
    {
        int x, y;
        scanf(" %d %d", &y, &x);
        bst.insert({x, y});
    }
    int l;
    scanf(" %d", &l);
    int nx = 1, ny = 1, d = 0, cnt = 0;
    queue<pair<int, int>> q;
    q.push({1, 1});
    for(int i=0;i<l;i++)
    {
        int tmp1;
        char tmp2;
        scanf(" %d %c", &tmp1, &tmp2);
        for(int j=cnt;j<tmp1;j++)
        {
            cnt++;
            nx += dx[d];
            ny += dy[d];
            if(nx<=0 || nx>n || ny<=0 || ny>n)
            {
                printf("%d", cnt);
                return 0;
            }
            int size = q.size();
            while(size--)
            {
                int tmpx = q.front().first, tmpy = q.front().second;
                q.pop();
                if(tmpx==nx && tmpy==ny)
                {
                    printf("%d", cnt);
                    return 0;
                }
                q.push({tmpx, tmpy});
            }
            q.push({nx, ny});
            if(bst.find({nx, ny})!=bst.end()) bst.erase({nx, ny});
            else q.pop();
        }
        if(tmp2=='L') d = (d+3)%4;
        else if(tmp2=='D') d = (d+1)%4;
        while(i==l-1)
        {
            cnt++;
            nx += dx[d];
            ny += dy[d];
            if(nx<=0 || nx>n || ny<=0 || ny>n)
            {
                printf("%d", cnt);
                return 0;
            }
            int size = q.size();
            while(size--)
            {
                int tmpx = q.front().first, tmpy = q.front().second;
                q.pop();
                if(tmpx==nx && tmpy==ny)
                {
                    printf("%d", cnt);
                    return 0;
                }
                q.push({tmpx, tmpy});
            }
            q.push({nx, ny});
            if(bst.find({nx, ny})!=bst.end()) bst.erase({nx, ny});
            else q.pop();
        }
    }

    return 0;
}