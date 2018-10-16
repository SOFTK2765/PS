#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
		if(a[i]!='C' && a[i]!='A' && a[i]!='M' && a[i]!='B' && a[i]!='R' && a[i]!='I' && a[i]!='D' && a[i]!='G' && a[i]!='E') printf("%c", a[i]);
	
	return 0;
}
