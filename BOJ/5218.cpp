#include <stdio.h>
#include <string.h>
#include <algorithm>

int main()
{
	int t;
	char a[21], b[21];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		scanf("%s %s", a, b);
		printf("Distances:");
		int l=strlen(a);
		for(int i=0;i<l;i++)
			printf(" %d", a[i]<=b[i]?(int)(b[i]-a[i]):(int)(b[i]-a[i]+26));
		printf("\n");
	}
	
	return 0;
}
