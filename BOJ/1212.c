#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	
	scanf("%o", &n);
	
	for(i=0;;i++)
	{
		if(pow(2, i)>=n) break;
	}
	for(i--;i>=0;i--)
	{
		if(n>=pow(2, i))
		{
			n-=pow(2, i);
			printf("1");
			
		}
		else
		{
			printf("0");
		}
	}
	
	return 0;
}
