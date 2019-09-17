#include <bits/stdc++.h>

using namespace std;

int a[9][9], spos[9][9];
bool check[10];
bool rcheck[10][10], ccheck[10][10], scheck[10][10];

bool f(int cnt)
{
    if(cnt==0)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
        return true;
    }
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(a[i][j]==0)
            {
                for(int k=1;k<=9;k++)
                    if(!rcheck[i][k] && !ccheck[j][k] && !scheck[spos[i][j]][k])
                    {
                        a[i][j] = k;
                        rcheck[i][k] = ccheck[j][k] = scheck[spos[i][j]][k] = true;
                        if(f(cnt-1)) return true;
                        rcheck[i][k] = ccheck[j][k] = scheck[spos[i][j]][k] = false;
                        a[i][j] = 0;
                    }
                if(a[i][j]==0) return false;
            }
    return false;
}

int main()
{
    int cnt = 0;
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==0) cnt++;
        }
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            rcheck[i][a[i][j]] = true;
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            ccheck[i][a[j][i]] = true;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                for(int l=0;l<3;l++)
                    scheck[spos[i*3+k][j*3+l] = i*3+j][a[i*3+k][j*3+l]] = true;
    f(cnt);

    return 0;
}