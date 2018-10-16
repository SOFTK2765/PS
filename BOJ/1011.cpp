#include <stdio.h>

int main()
{
	int t, x, y, sum=0;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		sum=0;
		scanf("%d %d", &x, &y);
		if(y-x==1)
		{
			printf("%d\n", 1);
			continue;
		}
		for(int j=1;;j++)
		{
			sum+=(j*2-1);
			if(y-x<=sum)
			{
				if(y-x-sum+(j*2-1)<=j/2)
				{
					printf("%d\n", (j-1)*2);
					break;
				}
				else
				{
					printf("%d\n", (j-1)*2+1);
					break;
				}
			}
		}
	}
	
	return 0;
}
