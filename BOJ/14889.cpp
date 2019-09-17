#include <bits/stdc++.h>

using namespace std;

int a[21][21];
bool check[21];

int n, mn = 987654321;

void f(int pos, int ni)
{
    if(pos==n/2)
    {
        vector<int> team1, team2;
        for(int i=0;i<n;i++)
            if(check[i]) team1.push_back(i);
            else team2.push_back(i);
        int sum1 = 0, sum2 = 0;
        for(int i=0;i<n/2;i++)
            for(int j=i+1;j<n/2;j++)
            {
                sum1 += a[team1[i]][team1[j]]+a[team1[j]][team1[i]];
                sum2 += a[team2[i]][team2[j]]+a[team2[j]][team2[i]];
            }
        mn = min(mn, abs(sum1-sum2));
        return;
    }
    for(int i=ni;i<n;i++)
        if(!check[i])
        {
            check[i] = true;
            f(pos+1, i+1);
            check[i] = false;
        }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    f(0, 0);
    printf("%d", mn);

    return 0;
}