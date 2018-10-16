#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n%2==0) printf("I LOVE CBNU");
	else
	{
		for(int i=0;i<n;i++)
			printf("*");
		printf("\n");
		for(int i=0;i<n/2+1;i++)
		{
			if(i==0)
			{
				for(int j=0;j<n/2-i;j++)
					printf(" ");
				printf("*\n");
			}
			else
			{
				for(int j=0;j<n/2-i;j++)
					printf(" ");
				printf("*");
				for(int j=0;j<2*i-1;j++)
					printf(" ");
				printf("*\n");
			}
		}
	}
	
	return 0;
}
