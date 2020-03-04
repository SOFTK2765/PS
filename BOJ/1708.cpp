#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    long long x, y, rx = 1, ry = 0;
    bool operator <(const Point &p1) const
    {
        if(rx*p1.ry != p1.rx*ry) return p1.rx*ry<rx*p1.ry;
        if(y!=p1.y) return y<p1.y;
        return x<p1.x;
    }
    long long ccw(const Point &p1, const Point &p2){return (p1.x-x)*(p2.y-y)-(p2.x-x)*(p1.y-y);}
};

int n;
Point a[100001];
stack<int> stk;

void convex_hull()
{
    sort(a, a+n);
    for(int i=0;i<n;i++)
    {
        a[i].rx = a[i].x-a[0].x;
        a[i].ry = a[i].y-a[0].y;
    }
    sort(a+1, a+n);
    stk.push(0);
    stk.push(1);
    for(int i=2;i<n;i++)
    {
        int size = stk.size();
        while(size>=2)
        {
            int tmp1 = stk.top(), tmp2;
            stk.pop();
            tmp2 = stk.top();
            if(a[tmp2].ccw(a[tmp1], a[i])>0)
            {
                stk.push(tmp1);
                break;
            }
            size = stk.size();
        }
        stk.push(i);
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lld %lld", &a[i].x, &a[i].y);
    convex_hull();
    printf("%d", stk.size());

    return 0;
}