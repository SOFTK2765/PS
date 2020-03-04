#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    long long x, y;
};

Point a[10001];

double triangle_area(Point p1, Point p2, Point p3){return (p1.x*p2.y+p2.x*p3.y+p3.x*p1.y-p2.x*p1.y-p3.x*p2.y-p1.x*p3.y)/2.0;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lld %lld", &a[i].x, &a[i].y);
    double sum = 0;
    for(int i=1;i<n-1;i++)
        sum += triangle_area(a[0], a[i], a[i+1]);
    printf("%.1lf", abs(sum));

    return 0;
}