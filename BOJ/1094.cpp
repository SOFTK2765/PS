#include <stdio.h>

int main()
{
	int x, s=0;
	scanf("%d", &x);
	while(1)
	{
		s+=x%2;
		if(x/2==0) break;
		x/=2;
	}
	printf("%d", s);
	
	return 0;
}
