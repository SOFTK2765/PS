#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[8][8], dp[8][8];
bool visit[8][8];

int main()
{
    for(int i=0;i<7;i++)
     for(int j=0;j<7;j++)
        scanf(" %d", &a[i][j]);
    for(int i=0;i<7;i++)
     dp[i][0] = a[i][0];
    for(int j=1;j<7;j++)
     for(int i=0;i<7;i++)
     {
        int mn = 987654321;
        for(int k=0;k<7;k++)
        {
           if(k<i)
           {
              int sum = dp[k][j-1];
              for(int l=k;l<i;l++)
                 sum += a[l][j];
              mn = min(mn, sum);
           }
           else if(k>i)
           {
              int sum = dp[k][j-1];
              for(int l=i+1;l<=k;l++)
                 sum += a[l][j];
              mn = min(mn, sum);
           }
           else mn = min(mn, dp[i][j-1]);
        }
        dp[i][j] = mn+a[i][j];
     }
    int mn = 987654321;
    for(int i=0;i<7;i++)
     mn = min(mn, dp[i][6]);
    printf("%d\n", mn);
   
   return 0;
}