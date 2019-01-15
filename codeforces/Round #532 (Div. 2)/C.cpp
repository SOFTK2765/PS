#include <bits/stdc++.h>

#define PI 3.14159265

using namespace std;

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    double target = abs(cos(180.0*(n-2)/n/2*PI/180)), res = 0.5, tmp = 1.0, cnt = 1000000;
    int flag = 0;
    while(cnt--)
    {
        double nres = (res+r)*target;
        if(nres>res)
        {
            res += tmp;
            if(flag==2) tmp *= 0.5;
            flag = 1;
        }
        else if(nres<res)
        {
            res -= tmp;
            if(flag==1) tmp *= 0.5;
            flag = 2;
        }
        else break;

    }
    printf("%.9lf", res);

    return 0;
}