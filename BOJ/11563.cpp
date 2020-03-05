#include <bits/stdc++.h>

using namespace std;

class point
{
public:
	double xs, ys, xe, ye;
	point(double a, double b, double c, double d)
	{
		xs = a;
		ys = b;
		xe = c;
		ye = d;
	}
};

double length(double xs, double ys, double xe, double ye){return sqrt((xs-xe)*(xs-xe)+(ys-ye)*(ys-ye));}

double ccw(double xs, double ys, double xe, double ye){return (xs*ye-xe*ys)<0?-1:1;}

double inner(double xs, double ys, double xe, double ye){return xs*xe+ys*ye;}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	vector<point> v1, v2;
	for(int i=0;i<n;i++)
	{
		double tmp1, tmp2, tmp3, tmp4;
		scanf(" %lf %lf %lf %lf", &tmp1, &tmp2, &tmp3, &tmp4);
		v1.push_back(point(tmp1, tmp2, tmp3, tmp4));
	}
	for(int i=0;i<m;i++)
	{
		double tmp1, tmp2, tmp3, tmp4;
		scanf(" %lf %lf %lf %lf", &tmp1, &tmp2, &tmp3, &tmp4);
		v2.push_back(point(tmp1, tmp2, tmp3, tmp4));
	}
	double mn = 987654321;
	int v1size = v1.size(), v2size = v2.size();
	for(int i=0;i<v1size;i++)
		for(int j=0;j<v2size;j++)
		{
			mn = min(mn, length(v1[i].xs, v1[i].ys, v2[j].xs, v2[j].ys));
			mn = min(mn, length(v1[i].xs, v1[i].ys, v2[j].xe, v2[j].ye));
			mn = min(mn, length(v1[i].xe, v1[i].ye, v2[j].xs, v2[j].ys));
			mn = min(mn, length(v1[i].xe, v1[i].ye, v2[j].xe, v2[j].ye));
			double ccw1 = ccw(v1[i].xs-v1[i].xe, v1[i].ys-v1[i].ye, v1[i].xe-v2[j].xs, v1[i].ye-v2[j].ys), ccw2 = ccw(v1[i].xe-v1[i].xs, v1[i].ye-v1[i].ys, v1[i].xs-v2[j].xs, v1[i].ys-v2[j].ys), cos1 = inner(v1[i].xe-v1[i].xs, v1[i].ye-v1[i].ys, v2[j].xs-v1[i].xs, v2[j].ys-v1[i].ys)/length(v2[j].xs, v2[j].ys, v1[i].xs, v1[i].ys)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye), cos2 = inner(v1[i].xs-v1[i].xe, v1[i].ys-v1[i].ye, v2[j].xs-v1[i].xe, v2[j].ys-v1[i].ye)/length(v2[j].xs, v2[j].ys, v1[i].xe, v1[i].ye)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye);
			if(ccw1==-ccw2 && cos1>0 && cos2>0)
			{
				double cosx = inner(v2[j].xs-v1[i].xs, v2[j].ys-v1[i].ys, v2[j].xs-v1[i].xe, v2[j].ys-v1[i].ye)/length(v2[j].xs, v2[j].ys, v1[i].xs, v1[i].ys)/length(v2[j].xs, v2[j].ys, v1[i].xe, v1[i].ye);
				mn = min(mn, length(v2[j].xs, v2[j].ys, v1[i].xs, v1[i].ys)*length(v2[j].xs, v2[j].ys, v1[i].xe, v1[i].ye)*sqrt(1-cosx*cosx)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye));
			}
			ccw1 = ccw(v1[i].xs-v1[i].xe, v1[i].ys-v1[i].ye, v1[i].xe-v2[j].xe, v1[i].ye-v2[j].ye);
			ccw2 = ccw(v1[i].xe-v1[i].xs, v1[i].ye-v1[i].ys, v1[i].xs-v2[j].xe, v1[i].ys-v2[j].ye);
			cos1 = inner(v1[i].xe-v1[i].xs, v1[i].ye-v1[i].ys, v2[j].xe-v1[i].xs, v2[j].ye-v1[i].ys)/length(v2[j].xe, v2[j].ye, v1[i].xs, v1[i].ys)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye);
			cos2 = inner(v1[i].xs-v1[i].xe, v1[i].ys-v1[i].ye, v2[j].xe-v1[i].xe, v2[j].ye-v1[i].ye)/length(v2[j].xe, v2[j].ye, v1[i].xe, v1[i].ye)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye);
			if(ccw1==-ccw2 && cos1>0 && cos2>0)
			{
				double cosx = inner(v2[j].xe-v1[i].xs, v2[j].ye-v1[i].ys, v2[j].xe-v1[i].xe, v2[j].ye-v1[i].ye)/length(v2[j].xe, v2[j].ye, v1[i].xs, v1[i].ys)/length(v2[j].xe, v2[j].ye, v1[i].xe, v1[i].ye);
				mn = min(mn, length(v2[j].xe, v2[j].ye, v1[i].xs, v1[i].ys)*length(v2[j].xe, v2[j].ye, v1[i].xe, v1[i].ye)*sqrt(1-cosx*cosx)/length(v1[i].xs, v1[i].ys, v1[i].xe, v1[i].ye));
			}
			ccw1 = ccw(v2[j].xs-v2[j].xe, v2[j].ys-v2[j].ye, v2[j].xe-v1[i].xs, v2[j].ye-v1[i].ys);
			ccw2 = ccw(v2[j].xe-v2[j].xs, v2[j].ye-v2[j].ys, v2[j].xs-v1[i].xs, v2[j].ys-v1[i].ys);
			cos1 = inner(v2[j].xe-v2[j].xs, v2[j].ye-v2[j].ys, v1[i].xs-v2[j].xs, v1[i].ys-v2[j].ys)/length(v1[i].xs, v1[i].ys, v2[j].xs, v2[j].ys)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye);
			cos2 = inner(v2[j].xs-v2[j].xe, v2[j].ys-v2[j].ye, v1[i].xs-v2[j].xe, v1[i].ys-v2[j].ye)/length(v1[i].xs, v1[i].ys, v2[j].xe, v2[j].ye)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye);
			if(ccw1==-ccw2 && cos1>0 && cos2>0)
			{
				double cosx = inner(v1[i].xs-v2[j].xs, v1[i].ys-v2[j].ys, v1[i].xs-v2[j].xe, v1[i].ys-v2[j].ye)/length(v1[i].xs, v1[i].ys, v2[j].xs, v2[j].ys)/length(v1[i].xs, v1[i].ys, v2[j].xe, v2[j].ye);
				mn = min(mn, length(v1[i].xs, v1[i].ys, v2[j].xs, v2[j].ys)*length(v1[i].xs, v1[i].ys, v2[j].xe, v2[j].ye)*sqrt(1-cosx*cosx)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye));
			}
			ccw1 = ccw(v2[j].xs-v2[j].xe, v2[j].ys-v2[j].ye, v2[j].xe-v1[i].xe, v2[j].ye-v1[i].ye);
			ccw2 = ccw(v2[j].xe-v2[j].xs, v2[j].ye-v2[j].ys, v2[j].xs-v1[i].xe, v2[j].ys-v1[i].ye);
			cos1 = inner(v2[j].xe-v2[j].xs, v2[j].ye-v2[j].ys, v1[i].xe-v2[j].xs, v1[i].ye-v2[j].ys)/length(v1[i].xe, v1[i].ye, v2[j].xs, v2[j].ys)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye);
			cos2 = inner(v2[j].xs-v2[j].xe, v2[j].ys-v2[j].ye, v1[i].xe-v2[j].xe, v1[i].ye-v2[j].ye)/length(v1[i].xe, v1[i].ye, v2[j].xe, v2[j].ye)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye);
			if(ccw1==-ccw2 && cos1>0 && cos2>0)
			{
				double cosx = inner(v1[i].xe-v2[j].xs, v1[i].ye-v2[j].ys, v1[i].xe-v2[j].xe, v1[i].ye-v2[j].ye)/length(v1[i].xe, v1[i].ye, v2[j].xs, v2[j].ys)/length(v1[i].xe, v1[i].ye, v2[j].xe, v2[j].ye);
				mn = min(mn, length(v1[i].xe, v1[i].ye, v2[j].xs, v2[j].ys)*length(v1[i].xe, v1[i].ye, v2[j].xe, v2[j].ye)*sqrt(1-cosx*cosx)/length(v2[j].xs, v2[j].ys, v2[j].xe, v2[j].ye));
			}
		}
	printf("%.9lf", mn);

	return 0;
}