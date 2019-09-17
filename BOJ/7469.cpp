#include <bits/stdc++.h>

using namespace std;

int a[100001], tmp[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        for(int j=tmp1-1;j<tmp2;j++)
            tmp[j] = a[j];
        sort(tmp+tmp1-1, tmp+tmp2);
        printf("%d\n", tmp[tmp1+tmp3-2]);
    }

    return 0;
}