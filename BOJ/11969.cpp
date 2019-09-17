#include <bits/stdc++.h>

using namespace std;

int a[100001];
tuple<int, int, int, int> sum[100001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
    {
        sum[i+1] = sum[i];
        if(a[i]==1) get<1>(sum[i+1])++;
        else if(a[i]==2) get<2>(sum[i+1])++;
        else if(a[i]==3) get<3>(sum[i+1])++;
    }
    for(int i=0;i<q;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        printf("%d %d %d\n", get<1>(sum[e])-get<1>(sum[s-1]), get<2>(sum[e])-get<2>(sum[s-1]), get<3>(sum[e])-get<3>(sum[s-1]));
    }

    return 0;
}