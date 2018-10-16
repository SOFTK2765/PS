#include <stdio.h>

int main()
{
	int n;
	double e=1, f=1;
	printf("n e\n");
	printf("- -----------\n");
	for(n=0;n<10;)
	{
		if(n<2) printf("%d %1.lf\n", n, e);
		else if(n==2) printf("%d %.1lf\n", n, e);
		else printf("%d %.9lf\n", n, e);
		n++;
		f*=n;
		e+=(1/f);
	}
	
	return 0;
}
