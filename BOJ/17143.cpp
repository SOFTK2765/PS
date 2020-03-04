#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[101][101], b[101][101];

int main()
{
    int r, c, m;
    scanf("%d %d %d", &r, &c, &m);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            a[i][j].first = -1;
    map<int, pair<pair<int, int>, pair<int, int>>> mp;
    for(int i=0;i<m;i++)
    {
        int tr, tc, s, d, z;
        scanf(" %d %d %d %d %d", &tr, &tc, &s, &d, &z);
        a[tr-1][tc-1] = {i, d};
        if(r==1 && (d==1 || d==2)) s = 0;
        else if(d==1 || d==2) s = s%((r-1)*2);
        else if(c==1 && (d==3 || d==4)) s = 0;
        else if(d==3 || d==4) s = s%((c-1)*2);
        mp[i] = {{z, s}, {tr-1, tc-1}};
    }
    int res = 0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            if(a[j][i].first!=-1)
            {
                res += mp[a[j][i].first].first.first;
                mp.erase(a[j][i].first);
                a[j][i] = {-1, 0};
                break;
            }
        for(int j=0;j<r;j++)
            for(int k=0;k<c;k++)
                b[j][k] = {-1, 0};
        vector<int> dead;
        for(auto &k : mp)
        {
            int num = k.first, nx = k.second.second.second, ny = k.second.second.first, z = k.second.first.first, s = k.second.first.second, d = a[ny][nx].second;
            a[ny][nx] = {-1, 0};
            if(d==1)
            {
                ny -= s;
                if(ny<0)
                {
                    int tmp = -ny-1;
                    if((tmp/(r-1))%2==0)
                    {
                        d = 2;
                        ny = (tmp%(r-1))+1;
                    }
                    else ny = ((((r-2)-tmp)%(r-1))+r-1)%(r-1);
                }
            }
            else if(d==2)
            {
                ny += s;
                if(ny>=r)
                {
                    int tmp = ny-r;
                    if((tmp/(r-1))%2==0)
                    {
                        d = 1;
                        ny = ((((r-2)-tmp)%(r-1))+r-1)%(r-1);
                    }
                    else ny = (tmp%(r-1))+1;
                }
            }
            else if(d==3)
            {
                nx += s;
                if(nx>=c)
                {
                    int tmp = nx-c;
                    if((tmp/(c-1))%2==0)
                    {
                        d = 4;
                        nx = ((((c-2)-tmp)%(c-1))+c-1)%(c-1);
                    }
                    else nx = (tmp%(c-1))+1;
                }
            }
            else if(d==4)
            {
                nx -= s;
                if(nx<0)
                {
                    int tmp = -nx-1;
                    if((tmp/(c-1))%2==0)
                    {
                        d = 3;
                        nx = (tmp%(c-1))+1;
                    }
                    else nx = ((((c-2)-tmp)%(c-1))+c-1)%(c-1);
                }
            }
            if(b[ny][nx].first!=-1)
            {
                if(mp[b[ny][nx].first].first.first<z)
                {
                    dead.push_back(b[ny][nx].first);
                    b[ny][nx] = {num, d};
                    k.second = {{z, s}, {ny, nx}};
                }
                else dead.push_back(num);
            }
            else
            {
                b[ny][nx] = {num, d};
                k.second = {{z, s}, {ny, nx}};
            }
        }
        int deadsize = dead.size();
        for(int j=0;j<deadsize;j++)
            mp.erase(dead[j]);
        for(int j=0;j<r;j++)
            for(int k=0;k<c;k++)
                a[j][k] = b[j][k];
    }
    printf("%d", res);

    return 0;
}