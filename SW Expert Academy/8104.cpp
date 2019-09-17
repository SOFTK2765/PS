#include <bits/stdc++.h>

using namespace std;

int sum[21];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        for(int i=1;i<=k;i++)
            sum[i] = 0;
        for(int i=0;i<n;i++)
            for(int j=1;j<=k;j++)
                if(i%2==0) sum[j] += (i*k+j);
                else sum[k+1-j] += (i*k+j);
        printf("#%d ", tc);
        for(int i=1;i<=k;i++)
            printf("%d ", sum[i]);
        printf("\n");
    }

    return 0;
}