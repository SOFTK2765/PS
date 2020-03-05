#include <bits/stdc++.h>

using namespace std;

class point
{
public:
    double x, y;
    point(double a, double b)
    {
        x = a;
        y = b;
    }
    bool operator > (point p)
    {
        if((*this).x!=p.x) return (*this).x>p.x;
        return (*this).y>p.y;
    }
    bool operator <= (point p)
    {
        if((*this).x!=p.x) return (*this).x<=p.x;
        return (*this).y<=p.y;
    }
};
/*
class segment
{
public:
    double x1, y1, x2, y2;
    segment(double a, double b, double c, double d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }
};

class rectangle
{
public:
    point p1, p2, p3, p4;
    rectangle(double a, double b, double c, double d)
    {
        p1.x = a; p1.y = b;
        p1.x = a; p1.y = d;
        p1.x = c; p1.y = d;
        p1.x = c; p1.y = b;
    }
};

point vec(point p1, point p2){return point(p2.x-p1.x, p2.y-p1.y);}

double ccw(point p1, point p2, point p3)
{
    point a(p2.x-p1.x, p2.y-p1.y), b(p3.x-p2.x, p3.y-p2.y);
    return a.x*b.y-b.x*a.y;
}

bool iscross(segment a, segment b)
{
    double ccw1 = ccw(point(a.x1, a.y1), point(a.x2, a.y2), point(b.x1, b.y1))*ccw(point(a.x1, a.y1), point(a.x2, a.y2), point(b.x2, b.y2)), ccw2 = ccw(point(b.x1, b.y1), point(b.x2, b.y2), point(a.x1, a.y1))*ccw(point(b.x1, b.y1), point(b.x2, b.y2), point(a.x2, a.y2));
    if(ccw1==0 && ccw2==0)
    {
        if(point(a.x1, a.y1)>point(a.x2, a.y2))
        {
            swap(a.x1, a.x2);
            swap(a.y1, a.y2);
        }
        if(point(b.x1, b.y1)>point(b.x2, b.y2))
        {
            swap(b.x1, b.x2);
            swap(b.y1, b.y2);
        }
        return point(b.x1, b.y1)<=point(a.x2, a.y2) && point(a.x1, a.y1)<=point(b.x2, b.y2);
    }
    return ccw1<=0 && ccw2<=0;
}*/

int main()
{
    point a = point(1, 2);
    cout << a.x << a.y;

    return 0;
}