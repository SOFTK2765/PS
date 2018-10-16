#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double xm, ym, a, b, c, d, t, s=0;
	int x[100001], y[100001];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for(int i=0;i<n;i++)
	{
		xm+=x[i];
		ym+=y[i];
	}
	xm/=n;
	ym/=n;
	for(int i=0;i<n;i++)
	{
		if(x[(i+1)%n]-x[i]!=0)
		{
			a=(y[(i+1)%n]-y[i])/(x[(i+1)%n]-x[i]);
			b=-1;
			c=(-x[i])*(y[(i+1)%n]-y[i])/(x[(i+1)%n]-x[i])+y[i];
		}
		else
		{
			a=1;
			b=0;
			c=-x[i];
		}
		if(a*xm+b*ym+c<0) t=-(a*xm+b*ym+c);
		else t=a*xm+b*ym+c;
		d=t/sqrt(pow(a, 2)+pow(b, 2));
		s+=d*sqrt(pow((x[(i+1)%n]-x[i]), 2)+pow((y[(i+1)%n]-y[i]), 2))/2;
	}
	printf("%.1lf", s);
	
	return 0;
}
