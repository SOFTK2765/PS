#include <stdio.h>

int main()
{
	int r, c, a, b;
	scanf("%d %d %d %d", &r, &c, &a, &b);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(i%2==0)
			{
				for(int k=0;k<c;k++)
				{
					if(k%2==0)
					{
						for(int l=0;l<b;l++)
							printf("X");
					}
					else
					{
						for(int l=0;l<b;l++)
							printf(".");
					}
				}
				printf("\n");
			}
			else
			{
				for(int k=0;k<c;k++)
				{
					if(k%2==0)
					{
						for(int l=0;l<b;l++)
							printf(".");
					}
					else
					{
						for(int l=0;l<b;l++)
							printf("X");
					}
				}
				printf("\n");
			}
		}
		
	}
	
	return 0;
}
