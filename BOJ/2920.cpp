#include <stdio.h>
#include <string.h>

int main()
{
	char a[9], b[9]={"12345678"};
	memset(a, 0, sizeof(a));
	for(int i=0;i<8;i++)
		scanf(" %c", &a[i]);
	if(strcmp(a, b)==0) printf("ascending");
	else if(strcmp(a, "87654321")==0) printf("descending");
	else printf("mixed");
	
	return 0;
}
