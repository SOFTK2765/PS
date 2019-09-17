#include <bits/stdc++.h>

using namespace std;

double a[101][2];
pair<double, int> d[4];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lf %lf", &a[i][0], &a[i][1]);
    int pre = 0;
    for(int i=0;i<n;i++)
        if(a[i][0]*a[i][0]+a[i][1]*a[i][1]>a[pre][0]*a[pre][0]+a[pre][1]*a[pre][1]) pre = i;
    double x = 0, y = 0, mv = 1;
    int cnt = 700;
    while(cnt--)
    {
        int mx = 0;
        for(int i=0;i<n;i++)
            if((a[mx][0]-x)*(a[mx][0]-x)+(a[mx][1]-y)*(a[mx][1]-y)<(a[i][0]-x)*(a[i][0]-x)+(a[i][1]-y)*(a[i][1]-y)) mx = i;
        if(pre!=mx) mv *= 0.93;
        x = x+(a[mx][0]-x)*mv;
        y = y+(a[mx][1]-y)*mv;
        pre = mx;
    }
    printf("%lf %lf %lf", x, y, sqrt((a[pre][0]-x)*(a[pre][0]-x)+(a[pre][1]-y)*(a[pre][1]-y)));

    return 0;
}