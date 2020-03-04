#include <bits/stdc++.h>

using namespace std;

int dp[10001][11];
int n;
string a, b;

int f1(int pos, int mv)
{
    if(dp[pos][mv]!=-1) return dp[pos][mv];
    if(pos==n) return dp[pos][mv] = 0;
    int r = -(10+(a[pos]-'0')-(b[pos]-'0')+mv)%10, l = (10+r)%10;
    return dp[pos][mv] = min(f1(pos+1, mv)-r, f1(pos+1, (mv+l)%10)+l);
}

void f2(int pos, int mv)
{
    if(pos==n) return;
    int r = -(10+(a[pos]-'0')-(b[pos]-'0')+mv)%10, l = (10+r)%10, res1 = dp[pos+1][mv]+abs(r), res2 = dp[pos+1][(mv+l)%10]+abs(l);
    if(dp[pos][mv]==res1)
    {
        if(r!=0) printf("%d %d\n", pos+1, r);
        f2(pos+1, mv);
    }
    else
    {
        if(l!=0) printf("%d %d\n", pos+1, l);
        f2(pos+1, (mv+l)%10);   
    }
}

int main()
{
    cin >> n >> a >> b;
    memset(dp, -1, sizeof(dp));
    printf("%d\n", f1(0, 0));
    f2(0, 0);

    return 0;
}