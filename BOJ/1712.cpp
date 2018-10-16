#include <stdio.h>

int main()
{
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	for(int i=0;;i++)
		if(a+b*i<c*i)
		{
			printf("%d", i);
			break;
		}
		else if((a+b*i)-(c*i)<=(a+b*(i+1))-(c*(i+1)))
		{
			printf("%d", -1);
			break;
		}
	
	return 0;
}