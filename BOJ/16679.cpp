#include <bits/stdc++.h>

using namespace std;

int a[21];
bool check[21], res[21];
int n, k;
long long mx;
bool flag;

void f(int pos, int sum, long long p)
{
    if(pos==n)
    {
        if(mx<p)
        {
            flag = true;
            mx = p;
            for(int i=0;i<n;i++)
                res[i] = check[i];
        }
        return;
    }
    check[pos] = true;
    f(pos+1, sum+6-a[pos], p*(6-a[pos]));
    check[pos] = false;
    f(pos+1, sum, p*6);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(check, 0, sizeof(check));
        memset(res, 0, sizeof(res));
        scanf(" %d %d", &n, &k);
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);
        mx = 0;
        flag = false;
        f(0, 0, 1);
        if(!flag) printf("0\n");
        else printf("%d\n", mx);
        for(int i=0;i<n;i++)
            printf("%d ", res[i]?1:0);
        printf("\n");
    }

    return 0;
}