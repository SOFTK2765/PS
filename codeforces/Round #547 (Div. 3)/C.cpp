#include <bits/stdc++.h>

using namespace std;

int a[200001];
bool check[500000];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++)
        scanf(" %d", &a[i]);
    long long mn = 2e11, mx = -2e11, tmp = 250000;
    check[tmp] = true;
    mn = min(mn, tmp);
    mx = max(mx, tmp);
    for(int i=0;i<n-1;i++)
    {
        tmp += a[i];
        mn = min(mn, tmp);
        mx = max(mx, tmp);
        if(check[tmp])
        {
            printf("-1");
            return 0;
        }
        check[tmp] = true;
    }
    if(mx-mn>=n)
    {
        printf("%d", -1);
        return 0;
    }
    tmp = 250000-mn+1;
    printf("%d ", tmp);
    for(int i=0;i<n-1;i++)
    {
        tmp += a[i];
        printf("%d ", tmp);
    }

    return 0;
}