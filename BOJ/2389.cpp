#include <bits/stdc++.h>

using namespace std;

double a[101][3];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lf %lf", &a[i][0], &a[i][1]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            double x = (a[i][0]+a[j][0])/2;
            double y = (a[i][1]+a[j][1])/2;
            double r = sqrt((a[i][0]-x)*(a[i][0]-x)+(a[i][1]-y)*(a[i][1]-y));
            for(int k=0;k<n;k++)
            {
                if(sqrt((a[k][0]-x)*(a[k][0]-x)+(a[k][1]-y)*(a[k][1]-y)) > r) break;
                if(k == n-1) printf("%lf %lf %.10lf\n", x, y, r);
            }
        }

    return 0;
}