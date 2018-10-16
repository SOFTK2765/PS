#include <stdio.h>
#include <string.h>

int main()
{
	char a[101], b[101];
	char c;
	scanf("%s %c %s", &a, &c, &b);
	int al=strlen(a)-1;
	int bl=strlen(b)-1;
	if(c=='*')
	{
	
		printf("%d", 1);
		for(int i=0;i<al+bl;i++)
			printf("%d", 0);
	}
	else if(c=='+')
	{
		if(al==bl)
		{
			printf("%d", 2);
			for(int i=0;i<al;i++)
				printf("%d", 0);
		}
		else
		{
			printf("%d", 1);
			int lar=al>bl?al:bl;
			int sma=al<bl?al:bl;
			for(int i=0;i<lar;i++)
			{
				if(i==lar-sma-1) printf("%d", 1);
				else printf("%d", 0);
			}
		}
	}
	
	return 0;
}
