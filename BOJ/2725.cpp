#include <bits/stdc++.h>

using namespace std;

bool check[1001][1001], scheck[1001][1001];
int cnt[1001];

int main()
{
    check[0][1] = check[1][0] = scheck[0][1] = scheck[1][0] = true;
    for(int i=1;i<1001;i++)
        for(int j=1;j<1001;j++)
        {
            if(!scheck[i][j])
            {
                scheck[i][j] = true;
                check[i][j] = true;
                for(int k=2;i*k<=1000 && j*k<=1000;k++)
                    scheck[i*k][j*k] = true;
            }
        }
    cnt[0] = 1;
    for(int i=1;i<=1000;i++)
    {
        int sum = 0;
        for(int j=0;j<i;j++)
        {
            if(check[i][j]) sum++;
            if(check[j][i]) sum++;
        }
        cnt[i] = cnt[i-1]+sum;
    }
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int n;
        scanf(" %d", &n);
        printf("%d\n", cnt[n]);
    }

    return 0;
}