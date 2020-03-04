#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 1, -1, 0, 0};
const int dy[] = {0, 0, 0, -1, 1};

int a[13][13];
stack<int> stk[13][13];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    vector<pair<pair<int, int>, int>> v;
    for(int i=0;i<k;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        v.push_back({{tmp1-1, tmp2-1}, tmp3});
        stk[tmp1-1][tmp2-1].push(i);
    }
    bool flag = false;
    int t;
    for(t=1;t<=1000;t++)
    {
        for(int i=0;i<k;i++)
        {
            int x = v[i].first.second, y = v[i].first.first, d = v[i].second, nx = x+dx[d], ny = y+dy[d];
            if(nx<0 || nx>=n || ny<0 || ny>=n || a[ny][nx]==2)
            {
                if(d==1) d = 2;
                else if(d==2) d = 1;
                else if(d==3) d = 4;
                else if(d==4) d = 3;
                nx = x+dx[d];
                ny = y+dy[d];
                v[i].second = d;
                if(nx<0 || nx>=n || ny<0 || ny>=n || a[ny][nx]==2) continue;
            }
            if(a[ny][nx]==0)
            {
                stack<int> tmpstk;
                while(stk[y][x].top()!=i)
                {
                    tmpstk.push(stk[y][x].top());
                    stk[y][x].pop();
                }
                tmpstk.push(stk[y][x].top());
                stk[y][x].pop();
                while(!tmpstk.empty())
                {
                    int top = tmpstk.top();
                    v[top].first.first = ny;
                    v[top].first.second = nx;
                    stk[ny][nx].push(top);
                    tmpstk.pop();
                }
                if(stk[ny][nx].size()>=4)
                {
                    flag = true;
                    break;
                }
            }
            else if(a[ny][nx]==1)
            {
                while(stk[y][x].top()!=i)
                {
                    stk[ny][nx].push(stk[y][x].top());
                    v[stk[y][x].top()].first.first = ny;
                    v[stk[y][x].top()].first.second = nx;
                    stk[y][x].pop();
                }
                stk[ny][nx].push(stk[y][x].top());
                v[stk[y][x].top()].first.first = ny;
                v[stk[y][x].top()].first.second = nx;
                stk[y][x].pop();
                if(stk[ny][nx].size()>=4)
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) break;
    }
    printf("%d", flag?t:-1);

    return 0;
}