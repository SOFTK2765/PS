#include <bits/stdc++.h>

using namespace std;

const int dx = {1, -1, 0, 0};
const int dy = {0, 0, 1, -1};

char a[3][4];
char answer[3][4];
unsigned char visited[1][1][4];

int main()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf(" %c", &a[i][j]);
    queue<pair<int, int>> bfs;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j]=='0') bfs.push({j, i});
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first;
            int y = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i];
                int ny = y+dy[i];
                char tmp;
                tmp = a[ny][nx];
                a[ny][nx] = a[y][x];
                a[y][x] = tmp;
                for(int j=0;i<3;j++)
                    for(int k=0;k<3;k++)
                    {

                    }
            }
            
        }
    }


    return 0;
}