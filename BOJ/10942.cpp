#include <bits/stdc++.h>

using namespace std;

int a[2001];
bool check[2001][2001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int m;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        s--;
        e--;
        int l = e-s+1;
        bool flag = false;
        if(check[s][e])
        {
            flag = true;
            goto K;
        }
        for(int j=l/2;j>=0;j--)
        {
            if(a[s+j]!=a[e-j]) break;
            check[s+j][e-j] = true;
            if(j==0) flag = true;
        }
        K:
        printf("%d\n", flag);
    }

    return 0;
}