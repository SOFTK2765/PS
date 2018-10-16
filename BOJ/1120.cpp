#include <stdio.h>
#include <string.h>

char a[51], b[51];

int main()
{
	int count, min=51;
	scanf("%s %s", a, b);
	int al=strlen(a);
	int bl=strlen(b);
	for(int i=0;i<bl-al+1;i++)
	{
		count=0;
		for(int j=i;j<i+al;j++)
			if(a[j-i]!=b[j]) count++;
		if(min>count) min=count;
	}
	printf("%d", min);
	
	return 0;
}
