#include <stdio.h>

int main()
{
	int n, j;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &j);
		for(int k=0;k<j;k++)
		{
			for(int l=0;l<j;l++)
			{
				if(k==0 || k==j-1) printf("#");
				else
				{
					if(l==0 || l==j-1) printf("#");
					else printf("J");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
