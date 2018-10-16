#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, br, cr;
	scanf("%d %d %d", &a, &b, &c);
	br=sqrt(pow(a, 2)/(pow(b, 2)+pow(c, 2)))*b;
	cr=sqrt(pow(a, 2)/(pow(b, 2)+pow(c, 2)))*c;
	printf("%d %d", br, cr);
	
	return 0;
}
