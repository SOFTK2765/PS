#include <bits/stdc++.h>

using namespace std;

int a[101][101];
bool check[10001];

int main()
{
    int n;
    scanf("%d", &n);
    bool flag = false;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            if(check[a[i][j]])
            {
                flag = true;
                break;
            }
            check[a[i][j]] = true;
        }
    int res = n*(n*n+1)/2;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
            sum += a[i][j];
        if(sum!=res) flag = true;
    }
    if(!flag)
    {
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=0;j<n;j++)
                sum += a[j][i];
            if(sum!=res) flag = true;
        }
    }
    if(!flag)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
            sum += a[i][i];
        if(sum!=res) flag = true;
    }
    if(!flag)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
            sum += a[n-1-i][n-1-i];
        if(sum!=res) flag = true;
    }
    if(!flag) printf("TRUE");
    else printf("FALSE");

    return 0;
}