#include <stdio.h>

int main()
{
	char a[16];
	int time=0;
	scanf("%s", a);
	for(int i=0;a[i]!='\0';i++)
	{
		if('A'<=a[i] && a[i]<='R')
			time+=(a[i]-'A')/3+3;
		else if('S'<=a[i] && a[i]<='Y')
			time+=(a[i]-'B')/3+3;
		else
			time+=(a[i]-'C')/3+3;
	}
	printf("%d", time);
	
	return 0;
}
