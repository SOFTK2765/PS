#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[8], b[8];
	int an=0, bn=0;
	char t[9];
	int temp=0, now;
	scanf("%s %s", a, b);
	int al=strlen(a), bl=strlen(b);
	for(int i=0;i<al;i++)
	{
		if((a[i]-'0')==6) an+=5*pow(10, al-i-1);
		else an+=(a[i]-'0')*pow(10, al-i-1);
	}
	for(int i=0;i<bl;i++)
	{
		if((b[i]-'0')==6) bn+=5*pow(10, bl-i-1);
		else bn+=(b[i]-'0')*pow(10, bl-i-1);
	}	
	printf("%d ", an+bn);
	an=0, bn=0;
	for(int i=0;i<al;i++)
	{
		if((a[i]-'0')==5) an+=6*pow(10, al-i-1);
		else an+=(a[i]-'0')*pow(10, al-i-1);
	}
	for(int i=0;i<bl;i++)
	{
		if((b[i]-'0')==5) bn+=6*pow(10, bl-i-1);
		else bn+=(b[i]-'0')*pow(10, bl-i-1);
	}
	printf("%d", an+bn);
	
	return 0;
}
