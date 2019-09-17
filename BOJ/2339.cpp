#include <bits/stdc++.h>

using namespace std;

int a[21][21];

int f(int l, int r, int u, int d, int c)
{
    bool check1 = false;
    int res = 0, check2 = 0;
    if(c)
    {
        for(int i=l;i<=r;i++)
            for(int j=u;j<=d;j++)
            {
                if(a[j][i]==1)
                {
                    check1 = true;
                    int res1 = 1, res2 = 1;
                    bool tmpflag = false;
                    for(int k=u;k<=d;k++)
                        if(a[k][i]==2) tmpflag = true;
                    if(!tmpflag)
                    {
                        if(l<=i-1) res1 = f(l, i-1, u, d, 0);
                        if(i+1<=r) res2 = f(i+1, r, u, d, 0);
                        res += res1*res2;
                    }
                    j = d;
                }
                else if(a[j][i]==2) check2++;
            }
    }
    else
    {
        for(int i=u;i<=d;i++)
            for(int j=l;j<=r;j++)
            {
                if(a[i][j]==1)
                {
                    check1 = true;
                    int res1 = 1, res2 = 1;
                    bool tmpflag = false;
                    for(int k=l;k<=r;k++)
                        if(a[i][k]==2) tmpflag = true;
                    if(!tmpflag)
                    {
                        if(u<=i-1) res1 = f(l, r, u, i-1, 1);
                        if(i+1<=d) res2 = f(l, r, i+1, d, 1);
                        res += res1*res2;
                    }
                    j = r;
                }
                else if(a[i][j]==2) check2++;
            }
    }
    if(!check1)
    {
        if(check2==1) return 1;
        else return 0;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int res = f(0, n-1, 0, n-1, 0)+f(0, n-1, 0, n-1, 1);
    printf("%d", res?res:-1);

    return 0;
}