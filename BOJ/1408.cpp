#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i;
	char q, w;
	scanf("%d%c%d%c%d", &a, &q, &b, &w, &c);
	scanf("%d%c%d%c%d", &d, &q, &e, &w, &f);
	if(f-c<0)
	{
		f+=60;
		e-=1;
		i=f-c;
	}
	else i=f-c;
	if(e-b<0)
	{
		e+=60;
		d-=1;
		h=e-b;
	}
	else h=e-b;
	if(d-a<0)
	{
		d+=24;
		g=d-a;
	}
	else g=d-a;
	printf("%.2d%c%.2d%c%.2d", g, q, h, w, i);
	
	return 0;
}
