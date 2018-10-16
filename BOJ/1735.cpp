#include <stdio.h>

int main()
{
	int a, b, c, d, r1, r2, check;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	r1 = (a*d)+(b*c);
	r2 = b*d;
	check=r1<r2?r1:r2;
	
	for(int i=check; i>=1; i--)
	{
		if(r1%i==0 && r2%i==0)
		{
			r1/=i;
			r2/=i;
			break;
		}
	}
	
	printf("%d %d", r1, r2);
	
	return 0;
}
