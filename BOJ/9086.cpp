#include <stdio.h>
#include <string.h>

char a[1001];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		memset(a, 0, sizeof(a));
		scanf("%s", a);
		printf("%c%c\n", a[0], a[strlen(a)-1]);
	}
	
	return 0;
}
