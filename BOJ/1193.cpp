#include <stdio.h>

int main()
{
	int x, sum=0;
	scanf("%d", &x);
	for(int i=1;;i++)
	{
		sum+=i;
		if(x<=sum)
		{
			if(i%2==0)
			{
				printf("%d/%d", i-sum+x, sum-x+1);
			}
			else printf("%d/%d", sum-x+1, i-sum+x);
			break;
		}
	}
	return 0;
}
