#include <stdio.h>

int main()
{
	int n, f;
	scanf("%d %d", &n, &f);
	n=n/100*100;
	for(int i=0;;i++)
	{
		if((n+i)%f==0)
		{
			printf("%.2d", i);
			break;
		}
	}
	
	return 0;
}
