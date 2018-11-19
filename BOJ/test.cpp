#include <bits/stdc++.h>

using namespace std;

int n, num; 
bool visit[26][26];
int a[26][26];
int tmp[600];

const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};

void DFS(int x, int y)
{
    visit[y][x] = true;
    for(int i=0;i<4;i++)
    {       
        int nx = x+dx[i], ny = y+dy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<n && a[ny][nx] == 1 && !visit[ny][nx]) DFS(nx, ny);
    }
    tmp[num-1]++;
}

int main()
{
    char a = 'a';
    switch(a)
    {
        case 'a':
            printf("sailsfjlsfl");
            break;
    }

    return 0;
}