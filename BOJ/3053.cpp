#include <stdio.h>
#define PI 3.1415926535

int main()
{
	int r;
	scanf("%d", &r);
	printf("%.6lf\n%.6lf", (double)r*r*PI, (double)r*r*2);
	
	return 0;
}
