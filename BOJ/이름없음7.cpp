#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	scanf("%s", a);
	strcpy(a, strrev(a));
	printf("%s", a);
	
	return 0;
}
