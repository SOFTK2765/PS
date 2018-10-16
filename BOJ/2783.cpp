#include <stdio.h>

int main()
{
	int x[101], y[101];
	int n;
	scanf("%d %d %d", &x[0], &y[0], &n);
	for(int i=1;i<=n;i++)
		scanf("%d %d", &x[i], &y[i]);
	double min=(double)x[0]/y[0]*1000;
	for(int i=0;i<=n;i++)
		if(min>(double)x[i]/y[i]*1000) min=(double)x[i]/y[i]*1000;
	printf("%.2lf", min);
	
	return 0;
}
