#include <bits/stdc++.h>

using namespace std;

int a[10][10];
int cnt[10];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        for(int i=1;i<=9;i++)
            cnt[i] = 9;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                scanf(" %d", &a[i][j]);
                cnt[a[i][j]]--;
            }
        bool flag = false;
        for(int i=1;i<=9;i++)
            if(cnt[i]!=0) flag = true;
        for(int i=0;i<9;i++)
        {
            int sum1 = 0, sum2 = 0;
            for(int j=0;j<9;j++)
            {
                sum1 += a[i][j];
                sum2 += a[j][i];
            }
            if(sum1!=45 || sum2!=45) flag = true;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int sum = 0;
                for(int k=i*3;k<i*3+3;k++)
                    for(int l=j*3;l<j*3+3;l++)
                        sum += a[k][l];
                if(sum!=45) flag = true;
            }
        }
        printf("Case %d: %s\n", tc, flag?"INCORRECT":"CORRECT");
    }

    return 0;
}