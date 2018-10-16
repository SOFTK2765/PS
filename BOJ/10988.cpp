#include <stdio.h>
#include <string.h>

void rev(char *a)
{
	char temp;
	int l=strlen(a);
	for(int i=0;i<l/2;i++)
	{
		temp=*(a+i);
		*(a+i)=*(a+l-1-i);
		*(a+l-1-i)=temp;
	}
}

int main()
{
	char a[101], b[101];
	scanf("%s", a);
	strcpy(b, a);
	rev(b);
	if(strcmp(a, b)==0) printf("%d", 1);
	else printf("%d", 0);
	
	return 0;
}
