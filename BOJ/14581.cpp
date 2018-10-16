#include <stdio.h>

int main()
{
	char a[20];
	scanf("%s", a);
	for(int i=0;i<3;i++)
		printf(":fan:");
	printf("\n");
	printf(":fan:");
	printf(":%s:", a);
	printf(":fan:");
	printf("\n");
	for(int i=0;i<3;i++)
		printf(":fan:");
	
	return 0;
}
