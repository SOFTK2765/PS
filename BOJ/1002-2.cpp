#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        double x1, y1, r1, x2, y2, r2;
        scanf(" %lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
        double x = x2-x1;
        double y = y2-y1;
        double r = r1+r2;
        double d = sqrt(x*x+y*y);
        if(x==0 && y==0)
        {
            if(r1==r2) printf("%d\n", -1);
            else if(r1!=r2) printf("%d\n", 0);
            continue;
        }
        if(r1+r2>d)
        {
            if(r1-r2>d || r2-r1>d) printf("%d\n", 0);
            else if(r1-r2==d || r2-r1==d) printf("%d\n", 1);
            else if(r1-r2<d || r2-r1<d) printf("%d\n", 2);
        }
        else if(r1+r2==d) printf("%d\n", 1);
        else if(r1+r2<d) printf("%d\n", 0);
    }
    
    return 0;
}