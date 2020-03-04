#include <bits/stdc++.h>

using namespace std;

long long dp[51][101][2];
int n;
long long k;
char res[51];

long long f1(int pos, int ocnt, int check)
{
    if(ocnt<50) check = 1;
    if(dp[pos][ocnt][check]!=-1) return dp[pos][ocnt][check];
    if(pos==n)
    {
        if(ocnt!=50) check = 1;
        if(check) return dp[pos][ocnt][check] = 1;
        else return dp[pos][ocnt][check] = 0;
    }
    return dp[pos][ocnt][check] = f1(pos+1, ocnt+1, check)+f1(pos+1, ocnt-1, check);
}

void f2(int pos, int ocnt, int check, long long cnt)
{
    if(ocnt<50) check = 1;
    if(pos==n)
    {
        for(int i=0;i<n;i++)
            printf("%c", res[i]);
        printf("\n");
        return;
    }
    if(cnt+dp[pos+1][ocnt+1][(check || ocnt+1<50 || (pos+1==n && ocnt+1!=50))?1:0]>k)
    {
        res[pos] = '(';
        f2(pos+1, ocnt+1, (check || ocnt+1<50 || (pos+1==n && ocnt+1!=50))?1:0, cnt);
    }
    else
    {
        res[pos] = ')';
        f2(pos+1, ocnt-1, (check || ocnt-1<50 || (pos+1==n && ocnt-1!=50))?1:0, cnt+dp[pos+1][ocnt+1][(check || ocnt+1<50 || (pos+1==n && ocnt+1!=50))?1:0]);
    }
}

int main()
{
    scanf("%d %lld", &n, &k);
    memset(dp, -1, sizeof(dp));
    if(k>=f1(0, 50, false)) printf("-1");
    else f2(0, 50, false, 0);

    return 0;
}