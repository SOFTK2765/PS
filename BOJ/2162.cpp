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

bool check(segment a, segment b){return iscross(a, b);}

class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(int n) : parent(n), rank(n, 1)
    {
        for(int i=0;i<n;i++)
            parent[i] = i;
    }

    int find(int u)
    {
        if(u==parent[u]) return u;
        return parent[u] = find(parent[u]);
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u==v) return;
        if(rank[u]>rank[v]) swap(u, v);
        parent[u] = v;
        if(rank[u]==rank[v]) rank[v]++;
    }
};

segment a[3001];
int cnt[3001];

int main()
{
	int n;
	cin >> n;
	DisjointSet ds(n+1);
	for(int i=0;i<n;i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		a[i] = segment(x1, y1, x2, y2);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(check(a[i], a[j])) ds.merge(i, j);
	for(int i=0;i<n;i++)
		cnt[ds.find(i)]++;
	int rescnt = 0, mx = 0;
	for(int i=0;i<n;i++)
		if(cnt[i])
		{
			rescnt++;
			mx = max(mx, cnt[i]);
		}
	cout << rescnt << "\n" << mx;

	return 0;
}