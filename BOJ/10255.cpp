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
		p1 = point(a, b);
		p2 = point(a, d);
		p3 = point(c, d);
		p4 = point(c, b);
	}
};

point vec(point p1, point p2){return point(p2.x-p1.x, p2.y-p1.y);}

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

bool check1(segment s, point p1, point p2){return iscross(s, segment(p1.x, p1.y, p2.x, p2.y));}

bool check2(point p1, point p2, point p3){return (ccw(p1, p2, p3)==0 && ((p1<=p3 && p3<=p2) || (p2<=p3 && p3<=p1)));}

bool check3(point s1, point s2, point p1, point p2){return (s1.x==s2.x && s1.x==p1.x && ((p1.y<s1.y && s1.y<p2.y) || (p1.y<s2.y && s2.y<p2.y) || (s1.y<=p1.y && p2.y<=s2.y) || (s2.y<=p1.y && p2.y<=s1.y)));}

bool check4(point s1, point s2, point p1, point p2){return (s1.y==s2.y && s1.y==p1.y && ((p1.x<s1.x && s1.x<p2.x) || (p1.x<s2.x && s2.x<p2.x) || (s1.x<=p1.x && p2.x<=s2.x) || (s2.x<=p1.x && p2.x<=s1.x)));}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double xmn, ymn, xmx, ymx, x1, y1, x2, y2;
		cin >> xmn >> ymn >> xmx >> ymx >> x1 >> y1 >> x2 >> y2;
		rectangle r = rectangle(xmn, ymn, xmx, ymx);
		segment s = segment(x1, y1, x2, y2);
		int cnt = 0;
		if(check1(s, r.p1, r.p2)) cnt++;
		if(check1(s, r.p2, r.p3)) cnt++;
		if(check1(s, r.p3, r.p4)) cnt++;
		if(check1(s, r.p4, r.p1)) cnt++;
		if(check2(point(s.x1, s.y1), point(s.x2, s.y2), point(r.p1.x, r.p1.y))) cnt--;
		if(check2(point(s.x1, s.y1), point(s.x2, s.y2), point(r.p2.x, r.p2.y))) cnt--;
		if(check2(point(s.x1, s.y1), point(s.x2, s.y2), point(r.p3.x, r.p3.y))) cnt--;
		if(check2(point(s.x1, s.y1), point(s.x2, s.y2), point(r.p4.x, r.p4.y))) cnt--;
		if(check3(point(s.x1, s.y1), point(s.x2, s.y2), r.p1, r.p2)) cnt = 4;
		if(check3(point(s.x1, s.y1), point(s.x2, s.y2), r.p4, r.p3)) cnt = 4;
		if(check4(point(s.x1, s.y1), point(s.x2, s.y2), r.p2, r.p3)) cnt = 4;
		if(check4(point(s.x1, s.y1), point(s.x2, s.y2), r.p1, r.p4)) cnt = 4;
		printf("%d\n", cnt);
	}	

	return 0;
}