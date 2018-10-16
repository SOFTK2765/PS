#include <stdio.h>

int main()
{
	int n, temp, count=0, mul;
	scanf("%d", &n);
	while(1)
	{
		if(n/10==0) break;
		count++;
		mul=1;
		temp=n;
		while(1)
		{
			mul*=(n%10);
			if(n/10==0) break;
			n/=10;
		}
		n=mul;
	}
	printf("%d", count);
	
	return 0;
}
