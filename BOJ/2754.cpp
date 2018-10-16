#include <stdio.h>

int main()
{
	char a[3];
	float b;
	scanf("%s", a);
	if(a[0]=='A') b=4;
	if(a[0]=='B') b=3;
	if(a[0]=='C') b=2;
	if(a[0]=='D') b=1;
	if(a[0]=='F') b=0;
	if(a[1]=='+') b+=0.3;
	if(a[1]=='-') b-=0.3;
	printf("%.1f", b);
	
	return 0;
}
