#include <stdio.h>

int main()
{
	int h1, m1, s1, h2, m2, s2, r1, r2, r3;
	char a, b;
	scanf("%2d%c%2d%c%2d %2d%c%2d%c%2d", &h1, &a, &m1, &b, &s1, &h2, &a, &m2, &b, &s2);
	if(s2-s1<0)
	{
		s2+=60;
		m2--;
	}
	r3=s2-s1;
	if(m2-m1<0)
	{
		m2+=60;
		h2--;
	}
	r2=m2-m1;
	if(h2-h1<0)
		h2+=24;
	r1=h2-h1;
	if(r1==0 && r2==0 && r3==0)
	{
		r1=24;
		r2=0;
		r3=0;
	}
	printf("%.2d%c%.2d%c%.2d", r1, a, r2, b, r3);
	
	return 0;
}
