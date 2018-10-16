#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d ", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    int mx = 0;
    for(int i=0;i<m;i++)
    {
        int x = i, y = 0, d = 2, cnt = 0;
        while(x<m && y<n && x>=0 && y>=0)
        {
            cnt++;
            if(a[y][x]=='/')
            {
                if(d==0) d = 3;
                else if(d==1) d = 2;
                else if(d==2) d = 1;
                else if(d==3) d = 0;
            }
            else if(a[y][x]=='\\')
            {
                if(d==0) d = 2;
                else if(d==1) d = 3;
                else if(d==2) d = 0;
                else if(d==3) d = 1;
            }
            x += dx[d];
            y += dy[d];
        }
        mx = max(mx, cnt);
    }
    for(int i=0;i<m;i++)
    {
        int x = i, y = n-1, d = 3, cnt = 0;
        while(x<m && y<n && x>=0 && y>=0)
        {
            cnt++;
            if(a[y][x]=='/')
            {
                if(d==0) d = 3;
                else if(d==1) d = 2;
                else if(d==2) d = 1;
                else if(d==3) d = 0;
            }
            else if(a[y][x]=='\\')
            {
                if(d==0) d = 2;
                else if(d==1) d = 3;
                else if(d==2) d = 0;
                else if(d==3) d = 1;
            }
            x += dx[d];
            y += dy[d];
        }
        mx = max(mx, cnt);
    }
    for(int i=0;i<n;i++)
    {
        int x = 0, y = i, d = 0, cnt = 0;
        while(x<m && y<n && x>=0 && y>=0)
        {
            cnt++;
            if(a[y][x]=='/')
            {
                if(d==0) d = 3;
                else if(d==1) d = 2;
                else if(d==2) d = 1;
                else if(d==3) d = 0;
            }
            else if(a[y][x]=='\\')
            {
                if(d==0) d = 2;
                else if(d==1) d = 3;
                else if(d==2) d = 0;
                else if(d==3) d = 1;
            }
            x += dx[d];
            y += dy[d];
        }
        mx = max(mx, cnt);
    }
    for(int i=0;i<n;i++)
    {
        int x = m-1, y = i, d = 1, cnt = 0;
        while(x<m && y<n && x>=0 && y>=0)
        {
            cnt++;
            if(a[y][x]=='/')
            {
                if(d==0) d = 3;
                else if(d==1) d = 2;
                else if(d==2) d = 1;
                else if(d==3) d = 0;
            }
            else if(a[y][x]=='\\')
            {
                if(d==0) d = 2;
                else if(d==1) d = 3;
                else if(d==2) d = 0;
                else if(d==3) d = 1;
            }
            x += dx[d];
            y += dy[d];
        }
        mx = max(mx, cnt);
    }
    printf("%d", mx);

    return 0;
}