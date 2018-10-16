#include <stdio.h>
#include <string.h>

char a[1001];

int main()
{
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
		printf("%c", (26+a[i]-'A'-3)%26+'A');
	
	return 0;
}
