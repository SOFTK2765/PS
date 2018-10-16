#include <stdio.h>

int main()
{
	int n, result, f;
	while(1)
	{
		scanf("%d", &n);
		if(n==0) break;
		f=1;
		result=0;
		for(int i=2;;i++)
		{
			result+=(n%10)*f;
			if(n/10==0) break;
			n/=10;
			f*=i;
		}
		printf("%d\n", result);
	}
	
	return 0;
}
