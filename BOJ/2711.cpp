#include <stdio.h>
#include <string.h>

int main()
{
	int t, p;
	char a[80];
	
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %s", &p, a);
		char b[80]="";
		strncpy(b, a, p-1);
		strcat(b, (a+p));
		printf("%s", b);
	}
	
	return 0;
}
