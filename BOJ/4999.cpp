#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000], b[1000];
	scanf("%s %s", a, b);
	(strlen(a)<strlen(b))?printf("%s", "no"):printf("%s", "go");
	
	return 0;
}
