#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	char s;
	int h=10;
	
	scanf("%s", a);
	
	s=a[0];
	for(int i=1;i<strlen(a);i++)
	{
		if(s==a[i])
			h+=5;
		else
		{
			h+=10;
			s=a[i];
		}
	}
	printf("%d", h);
	
	return 0;
}
