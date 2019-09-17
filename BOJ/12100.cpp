#include <bits/stdc++.h>

using namespace std;

bool check[21][21];
int n, mx;

void f(int pos, vector<vector<int>> v)
{
    if(pos==5)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mx = max(mx, v[i][j]);
        return;
    }
    //상
    vector<vector<int>> vt = v;
    memset(check, 0, sizeof(check));
    for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
        {
            int tmp = i;
            while(tmp-1>=0 && vt[tmp-1][j]==0)
            {
                vt[tmp-1][j] = vt[tmp][j];
                vt[tmp][j] = 0;
                tmp--;
            }
            if(tmp-1>=0 && vt[tmp-1][j]==vt[tmp][j] && !check[tmp-1][j])
            {
                vt[tmp-1][j] *= 2;
                vt[tmp][j] = 0;
                check[tmp-1][j] = true;
            }
        }
    f(pos+1, vt);
    //하
    vt = v;
    memset(check, 0, sizeof(check));
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<n;j++)
        {
            int tmp = i;
            while(tmp+1<n && vt[tmp+1][j]==0)
            {
                vt[tmp+1][j] = vt[tmp][j];
                vt[tmp][j] = 0;
                tmp++;
            }
            if(tmp+1<n && vt[tmp+1][j]==vt[tmp][j] && !check[tmp+1][j])
            {
                vt[tmp+1][j] *= 2;
                vt[tmp][j] = 0;
                check[tmp+1][j] = true;
            }
        }
    f(pos+1, vt);
    //좌
    vt = v;
    memset(check, 0, sizeof(check));
    for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
        {
            int tmp = i;
            while(tmp-1>=0 && vt[j][tmp-1]==0)
            {
                vt[j][tmp-1] = vt[j][tmp];
                vt[j][tmp] = 0;
                tmp--;
            }
            if(tmp-1>=0 && vt[j][tmp-1]==vt[j][tmp] && !check[j][tmp-1])
            {
                vt[j][tmp-1] *= 2;
                vt[j][tmp] = 0;
                check[j][tmp-1] = true;
            }
        }
    f(pos+1, vt);
    //우
    vt = v;
    memset(check, 0, sizeof(check));
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<n;j++)
        {
            int tmp = i;
            while(tmp+1<n && vt[j][tmp+1]==0)
            {
                vt[j][tmp+1] = vt[j][tmp];
                vt[j][tmp] = 0;
                tmp++;
            }
            if(tmp+1<n && vt[j][tmp+1]==vt[j][tmp] && !check[j][tmp+1])
            {
                vt[j][tmp+1] *= 2;
                vt[j][tmp] = 0;
                check[j][tmp+1] = true;
            }
        }
    f(pos+1, vt);
}

int main()
{
    scanf("%d", &n);
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            v[i].push_back(tmp);
        }
    f(0, v);
    printf("%d", mx);

    return 0;
}