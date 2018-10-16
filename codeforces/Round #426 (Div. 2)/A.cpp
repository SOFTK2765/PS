#include <stdio.h>

int main()
{
	int n, as, bs;
	char a, b;
	scanf("%c %c %d", &a, &b, &n);
	if(a==118) as=0;
	else if(a==60) as=1;
	else if(a==94) as=2;
	else if(a==62) as=3;
	if(b==118) bs=0;
	else if(b==60) bs=1;
	else if(b==94) bs=2;
	else if(b==62) bs=3;
	if(n%4==(4+bs-as)%4 && n%4!=0 && n%4!=2) printf("cw");
	else if(n%4==(4+as-bs)%4 && n%4!=0 && n%4!=2) printf("ccw");
	else printf("undefined");
	
	return 0;
}
