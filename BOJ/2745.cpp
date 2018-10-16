#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char n[50];
	int b, r=0;
	scanf("%s %d", n, &b);
	for(int i=0;i<strlen(n);i++)
	{
		if(n[i]>=65 && n[i]<=90)
			r+=(int)(n[i]-55)*pow(b, strlen(n)-i-1);
		else
			r+=(int)(n[i]-48)*pow(b, strlen(n)-i-1);
	}
	printf("%d", r);
	
	return 0;
}
