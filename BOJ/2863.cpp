#include <stdio.h>

int main()
{
	int a, b, c, d, temp, sn;
	double s=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	for(int i=0;i<4;i++)
	{
		if(s<((double)a/c+(double)b/d))
		{
			s=((double)a/c+(double)b/d);
			sn=i;
		}
		temp=a;
		a=c;
		c=d;
		d=b;
		b=temp;
	}
	printf("%d", sn);
	
	return 0;
}
