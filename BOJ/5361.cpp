#include <stdio.h>

int main()
{
	int n;
	float a, b, c, d, e;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
		printf("\$%.2f\n", a*350.34+b*230.90+c*190.55+d*125.30+e*180.90);
	}
	
	return 0;
}
