#include <bits/stdc++.h>

using namespace std;

class point
{
public:
	double x, y;
	point(){}
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

class segment
{
public:
	double x1, y1, x2, y2;
	segment(){}
	segment(double a, double b, double c, double d)
	{
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	}
};

double ccw(point p1, point p2, point p3)
{
	point a = point(p2.x-p1.x, p2.y-p1.y), b = point(p3.x-p2.x, p3.y-p2.y);
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
}

point a[11], b[11];
segment tmp[11];
char pm[] = "0123456789";

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i].x >> a[i].y;
	for(int i=0;i<n;i++)
		cin >> b[i].x >> b[i].y;
	do
	{
		for(int i=0;i<n;i++)
		{
			int npm = pm[i]-'0';
			tmp[i] = segment(a[i].x, a[i].y, b[npm].x, b[npm].y);
		}
		bool flag = false;
		for(int i=0;i<n && !flag;i++)
			for(int j=i+1;j<n;j++)
				if(iscross(tmp[i], tmp[j]))
				{
					flag = true;
					break;
				}
		if(!flag)
		{
			for(int i=0;i<n;i++)
				printf("%d\n", pm[i]-'0'+1);
			break;
		}
	}while(next_permutation(pm, pm+n));

	return 0;
}