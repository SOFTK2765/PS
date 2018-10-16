#include <bits/stdc++.h>

using namespace std;

int a[51][51];
int c[14][2];
int cd[2500][14];
bool check[14];
int n, m, cnt = 0, ccnt = 0, summn = 987654321;

void f(int pos, int ni)
{
    if(pos==ccnt-m)
    {
        int sum = 0;
        for(int i=0;i<cnt;i++)
        {
            int mn = 987654321;
            for(int j=0;j<ccnt;j++)
                if(!check[j] && (mn>cd[i][j])) mn = cd[i][j];
            sum += mn;
        }
        if(summn>sum) summn = sum;
        return;
    }
    for(int i=ni;i<ccnt;i++)
    {
        check[i] = true;
        f(pos+1, i+1);
        check[i] = false;
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==2)
            {
                c[pos][0] = i;
                c[pos++][1] = j;
            }
        }
    ccnt = pos;
    pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==1)
            {
                for(int k=0;k<ccnt;k++)
                    cd[pos][k] = abs(c[k][0]-i)+abs(c[k][1]-j);
                pos++;
            }
    cnt = pos;
    f(0, 0);
    printf("%d\n", summn);

    return 0;
}