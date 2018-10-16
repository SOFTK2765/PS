#include <stdio.h>
#include <string.h>

char a[1000001];

int main()
{
	int count=0;
	for(;scanf("%s", a)!=EOF;)
		count++;
	printf("%d", count);
	
	return 0;
}
