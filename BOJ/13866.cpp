#include <stdio.h>
#include <algorithm>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", abs((b+c)-(a+d)));
	
	return 0;
}
