#include <stdio.h>
#include <string.h>

int main()
{
	int t, r;
	char a[21];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %s", &r, a);
		int l=strlen(a);
		for(int j=0;j<l;j++)
			for(int k=0;k<r;k++)
				printf("%c", a[j]);
		printf("\n");
	}
	
	return 0;
}
