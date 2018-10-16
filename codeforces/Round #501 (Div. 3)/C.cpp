#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int pos = 0;
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        a[pos++] = tmp1-tmp2;
        sum += tmp1;
    }
    sort(a, a+pos);
    if(sum<=m)
    {
        printf("%d", 0);
        return 0;
    }
    for(int i=pos-1;i>=0;i--)
    {
        sum -= a[i];
        if(sum<=m)
        {
            printf("%d", pos-i);
            break;
        }
        if(i==0) printf("-1");
    }

    return 0;
}