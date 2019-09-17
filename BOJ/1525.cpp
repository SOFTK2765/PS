#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

set<unsigned int> visit;
int ns[4][4], tmpns[4][4];

int main()
{
    unsigned int a = 0;
    int si;
    for(int i=0;i<9;i++)
    {
        int tmp;
        scanf("%d ", &tmp);
        if(tmp==0)
        {
            si = i;
            continue;
        }
        a <<= 3;
        a += tmp-1;
    }
    a <<= 8;
    a += (256>>si)%256;
    queue<unsigned int> bfs;
    bfs.push(a);
    visit.insert(a);
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            unsigned int tmp = bfs.front();
            bfs.pop();
            if(tmp==87652097)
            {
                printf("%d", cnt);
                return 0;
            }
            int zd = tmp%256, zpos = 0;
            for(int i=0;i<8;i++)
                if((zd>>i)&1) zpos = 8-i;
            tmp >>= 8;
            list<int> lt;
            for(int i=0;i<9;i++)
                if(i==8-zpos) lt.push_front(0);
                else
                {
                    lt.push_front((tmp%8)+1);
                    tmp >>= 3;
                }
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                {
                    ns[i][j] = lt.front();
                    lt.pop_front();
                }
            int x = zpos%3, y = zpos/3;
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<3;j++)
                    for(int k=0;k<3;k++)
                        tmpns[j][k] = ns[j][k];
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=3 || ny<0 || ny>=3) continue;
                swap(tmpns[ny][nx], tmpns[y][x]);
                unsigned int nd = 0;
                for(int j=0;j<3;j++)
                    for(int k=0;k<3;k++)
                    {
                        if(tmpns[j][k]==0) continue;
                        nd <<= 3;
                        nd += tmpns[j][k]-1;
                    }
                nd <<= 8;
                nd += (256>>(ny*3+nx))%256;
                if(visit.find(nd)!=visit.end()) continue;
                bfs.push(nd);
                visit.insert(nd);
            }
        }
        cnt++;
    }
    printf("-1");

    return 0;
}