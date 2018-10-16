#include <stdio.h>

int main()
{
	int n;
	char a;
	int b;
	scanf("%d", &n);
	n=(n+56)%60;
	a=(n%12)+65;
	b=(n%10);
	printf("%c%d", a, b);
	
	return 0;
}
