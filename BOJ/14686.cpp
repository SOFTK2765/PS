#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int res1 = 0, res2 = 0, res = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        res1 += a[i];
        res2 += tmp;
        if(res1==res2) res = i+1;
    }
    printf("%d", res);

    return 0;
}