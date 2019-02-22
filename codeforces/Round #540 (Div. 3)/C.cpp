#include <bits/stdc++.h>

using namespace std;

int cnt[1001], save[1001];
int res[21][21];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n*n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        cnt[tmp]++;
    }
    for(int i=0;i<1001;i++)
    {
        if(cnt[i]!=0)
        {
            save[i] += (cnt[i]/4);
            cnt[i] -= (cnt[i]/4*4);
        }
    }
    bool flag = true;
    int tcnt = 0, center;
    queue<int> q, q2;
    for(int i=0;i<1001;i++)
        if(save[i]!=0)
        {
            for(int j=0;j<save[i];j++)
                q.push(i);
        }
    if(n%2==0)
    {
        for(int i=0;i<1001;i++)
            if(cnt[i]!=0) flag = false;
        if(!flag) printf("NO");
        else
        {
            printf("YES\n");
            for(int i=0;i<n/2;i++)
            {
                for(int j=0;j<n/2-i;j++)
                {
                    int tmp = q.front();
                    q.pop();
                    if(j==0)
                    {
                        res[i][i] = tmp;
                        res[n-i-1][i] = tmp;
                        res[i][n-i-1] = tmp;
                        res[n-i-1][n-i-1] = tmp;
                    }
                    else
                    {
                        res[i][i+j] = tmp;
                        res[n-i-1][i+j] = tmp;
                        res[i][n-i-1-j] = tmp;
                        res[n-i-1][n-i-1-j] = tmp;
                        tmp = q.front();
                        q.pop();
                        res[i+j][i] = tmp;
                        res[n-i-1-j][i] = tmp;
                        res[i+j][n-i-1] = tmp;
                        res[n-i-1-j][n-i-1] = tmp;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    printf("%d ", res[i][j]);
                printf("\n");
            }
        }
    }
    else
    {
        for(int i=0;i<1001;i++)
            if(cnt[i]!=0 && cnt[i]!=1)
            {
                cnt[i] -= (cnt[i]/2*2);
                q2.push(i);
            }
        for(int i=0;i<1001;i++)
            if(cnt[i]==1)
            {
                tcnt++;
                center = i;
            }
        if(tcnt!=1) flag = false;
        if(!flag) printf("NO");
        else
        {
            if(q.empty())
            {
                printf("NO");
                return 0;
            }
            printf("YES\n");
            for(int i=0;i<n/2;i++)
            {
                for(int j=0;j<n/2-i;j++)
                {
                    int tmp = q.front();
                    q.pop();
                    if(j==0)
                    {
                        res[i][i] = tmp;
                        res[n-i-1][i] = tmp;
                        res[i][n-i-1] = tmp;
                        res[n-i-1][n-i-1] = tmp;
                        if(!q2.empty())
                        {
                            tmp = q2.front();
                            q2.pop();
                            res[i][(n-1)/2] = tmp;
                            res[n-i-1][(n-1)/2] = tmp;
                            tmp = q2.front();
                            q2.pop();
                            res[(n-1)/2][i] = tmp;
                            res[(n-1)/2][n-i-1] = tmp;
                        }
                        else
                        {
                            tmp = q.front();
                            q.pop();
                            res[i][(n-1)/2] = tmp;
                            res[n-i-1][(n-1)/2] = tmp;
                            res[(n-1)/2][i] = tmp;
                            res[(n-1)/2][n-i-1] = tmp;
                        }
                    }
                    else
                    {
                        res[i][i+j] = tmp;
                        res[n-i-1][i+j] = tmp;
                        res[i][n-i-1-j] = tmp;
                        res[n-i-1][n-i-1-j] = tmp;
                        tmp = q.front();
                        q.pop();
                        res[i+j][i] = tmp;
                        res[n-i-1-j][i] = tmp;
                        res[i+j][n-i-1] = tmp;
                        res[n-i-1-j][n-i-1] = tmp;
                    }
                }
            }
            res[n/2][n/2] = center;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    printf("%d ", res[i][j]);
                printf("\n");
            }
        }
    }

    return 0;
}