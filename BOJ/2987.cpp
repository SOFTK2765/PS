#include <stdio.h>
#include <math.h>

int main()
{
	int xa, xb, xc, ya, yb, yc, count=0, n, a, b;
	int x[3], y[3];
	scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);
	printf("%.1f\n", abs(xa*(yb-yc)+xb*(yc-ya)+xc*(ya-yb))/2);
	x[0]=xa;
	x[1]=xb;
	x[2]=xc;
	y[0]=ya;
	y[1]=yb;
	y[2]=yc;
	int min, temp;
	for(int i=0;i<2;i++)
	{
		min=i;
		for(int j=i+1;j<3;j++)
			if(x[j]<x[min]) min=j;
		temp=x[i];
		x[i]=x[min];
		x[min]=temp;
	}
	for(int i=0;i<2;i++)
	{
		min=i;
		for(int j=i+1;j<3;j++)
			if(y[j]<y[min]) min=j;
		temp=y[i];
		y[i]=y[min];
		y[min]=temp;
	}
	double m1, m2, m3;
	m1=(double)(yb-ya)/(xb-xa);
	m2=(double)(yc-yb)/(xc-xb);
	m3=(double)(ya-yc)/(xa-xc);
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a, &b);
		
	}
	
	return 0;
}
