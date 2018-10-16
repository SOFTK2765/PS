#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	char a[9];
	int ini, num;
	for(int i=0;i<n;i++)
	{
		scanf("%s", a);
		ini=(a[0]-'A')*26*26+(a[1]-'A')*26+(a[2]-'A');
		num=(a[4]-'0')*1000+(a[5]-'0')*100+(a[6]-'0')*10+(a[7]-'0');
		if(-100<=ini-num && ini-num<=100) printf("nice\n");
		else printf("not nice\n");
	}
	
	return 0;
}
