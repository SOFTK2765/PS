#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0, fx, fy, x, y;
    scanf(" %lf %lf", &fx, &fy);
    x = fx;
    y = fy;
    for(int i=1;i<n;i++)
    {
        double tx, ty;
        scanf(" %lf %lf", &tx, &ty);
        sum += (sqrt((x-tx)*(x-tx)+(y-ty)*(y-ty)));
        x = tx;
        y = ty;
    }
    sum += (sqrt((fx-x)*(fx-x)+(fy-y)*(fy-y)));
    printf("%d", (int)sum);

    return 0;
}