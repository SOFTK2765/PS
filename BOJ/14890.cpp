#include <bits/stdc++.h>

using namespace std;

int a[101][101], cnt[101][101];
bool rflag[101], cflag[101];
bool check[101][101];

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<n;i++)
    {
        int tmp = a[i][0], tmpcnt = 0;
        bool flag = false;
        for(int j=0;j<n;j++)
        {
            if(tmp==a[i][j])
            {
                tmpcnt++;
                if(flag)
                {
                    if(check[i][j])
                    {
                        rflag[i] = true;
                        break;
                    }
                    check[i][j] = true;
                    if(tmpcnt>=l) flag = false;
                }
            }
            else
            {
                if(abs(a[i][j]-a[i][j-1])>=2)
                {
                    rflag[i] = true;
                    break;
                }
                tmpcnt = 1;
                tmp = a[i][j];
                if(a[i][j-1]<a[i][j])
                {
                    bool tmpflag = false;
                    for(int k=0;k<l;k++)
                        if(check[i][j-1-k])
                        {
                            tmpflag = true;
                            break;
                        }
                    if(cnt[i][j-1]<l || tmpflag)
                    {
                        rflag[i] = true;
                        break;
                    }
                }
                else if(a[i][j-1]>a[i][j])
                {
                    if(flag)
                    {
                        rflag[i] = true;
                        break;
                    }
                    flag = true;
                    check[i][j] = true;
                    if(tmpcnt>=l) flag = false;
                }
            }
            cnt[i][j] = tmpcnt;
        }
        if(flag) rflag[i] = true;
    }
    memset(check, 0, sizeof(check));
    for(int i=0;i<n;i++)
    {
        int tmp = a[0][i], tmpcnt = 0;
        bool flag = false;
        for(int j=0;j<n;j++)
        {
            if(tmp==a[j][i])
            {
                tmpcnt++;
                if(flag)
                {
                    if(check[j][i])
                    {
                        cflag[i] = true;
                        break;
                    }
                    check[j][i] = true;
                    if(tmpcnt>=l) flag = false;
                }
            }
            else
            {
                if(abs(a[j][i]-a[j-1][i])>=2)
                {
                    cflag[i] = true;
                    break;
                }
                tmpcnt = 1;
                tmp = a[j][i];
                if(a[j-1][i]<a[j][i])
                {
                    bool tmpflag = false;
                    for(int k=0;k<l;k++)
                        if(check[j-1-k][i])
                        {
                            tmpflag = true;
                            break;
                        }
                    if(cnt[j-1][i]<l || tmpflag)
                    {
                        cflag[i] = true;
                        break;  
                    }
                }
                else if(a[j-1][i]>a[j][i])
                {
                    if(flag)
                    {
                        cflag[i] = true;
                        break;
                    }
                    flag = true;
                    check[j][i] = true;
                    if(tmpcnt>=l) flag = false;
                }
            }
            cnt[j][i] = tmpcnt;
        }
        if(flag) cflag[i] = true;
    }
    int res = 0;
    for(int i=0;i<n;i++)
    {
        if(!rflag[i]) res++;
        if(!cflag[i]) res++;
    }
    printf("%d", res);

    return 0;
}