#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
		if(a[i]>=65 && a[i]<=90) printf("%c", a[i]);
	
	return 0;
}
