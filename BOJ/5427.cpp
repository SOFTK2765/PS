#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[1001][1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int w, h;
        scanf(" %d %d", &w, &h);
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                scanf(" %c", &a[i][j]);
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
        queue<pair<int, int>> bfs;
        bfs.push({0, 0});
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                
            }
        }
    }
    

    return 0;
}