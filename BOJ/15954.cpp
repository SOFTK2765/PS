#include <bits/stdc++.h>

using namespace std;

int a[501];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    double mn = 987654321;
    for(int cnt=k;cnt<=n;cnt++)
    {
        for(int i=0;i<n-cnt+1;i++)
        {
            int sum = 0;
            for(int j=i;j<i+cnt;j++)
                sum += a[j];
            double m = 1.0*sum/cnt, bsum = 0;
            for(int j=i;j<i+cnt;j++)
                bsum += (a[j]-m)*(a[j]-m);
            bsum /= cnt;
            mn = min(mn, sqrt(bsum));
        }
    }
    printf("%.9lf", mn);

    return 0;
}