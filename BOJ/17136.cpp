#include <bits/stdc++.h>

using namespace std;

int a[11][11];
int cnt[6];
int mn = 987654321;

void f(int x, int y)
{
    bool check = false;
    for(int i=y;i<10;i++)
    {
        for(int j=(i==y?x:0);j<10;j++)
            if(a[i][j]==1)
            {
                if(mn<=25-(cnt[1]+cnt[2]+cnt[3]+cnt[4]+cnt[5]-1)) return;
                check = true;
                for(int k=5;k>=1;k--)
                    if(cnt[k]!=0 && j<=10-k && i<=10-k)
                    {
                        bool flag = false;
                        for(int l=i;l<i+k;l++)
                        {
                            for(int m=j;m<j+k;m++)
                                if(!a[l][m])
                                {
                                    flag = true;
                                    break;
                                }
                            if(flag) break;
                        }
                        if(!flag)
                        {
                            for(int l=i;l<i+k;l++)
                                for(int m=j;m<j+k;m++)
                                    a[l][m] = 0;
                            cnt[k]--;
                            f(j+1, i);
                            for(int l=i;l<i+k;l++)
                                for(int m=j;m<j+k;m++)
                                    a[l][m] = 1;
                            cnt[k]++;
                        }
                    }
                break;
            }
        if(check) break;
    }
    if(!check)
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                if(a[i][j])
                {
                    check = true;
                    return;
                }
    if(!check) mn = min(mn, 25-(cnt[1]+cnt[2]+cnt[3]+cnt[4]+cnt[5]));
}

int main()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            scanf("%d ", &a[i][j]);
    for(int i=1;i<=5;i++)
        cnt[i] = 5;
    f(0, 0);
    printf("%d", mn==987654321?-1:mn);

    return 0;
}