#include <stdio.h>
#include <string.h>

char a[101];

int main()
{
	int k, h;
	scanf("%d", &k);
	for(int i=0;i<k;i++)
	{
		memset(a, 0, sizeof(a));
		scanf("%d %s", &h, a);
		int al=strlen(a);
		for(int j=0;j<al;j++)
		{
			if(a[j]=='c') h++;
			else if(a[j]=='b') h--;
		}
		printf("Data Set %d:\n%d\n\n", i+1, h);
	}
	
	return 0;
}
