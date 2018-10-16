#include <stdio.h>

int main()
{
	int m, n, pc, sum=0, fc=0, min;
	scanf("%d %d", &m, &n);
	for(int i=m;i<=n;i++)
	{
		pc=0;
		for(int j=1;j<=i/2 && pc<2;j++)
		{
			if(i%j==0) pc++;
		}
		if(pc==1)
		{
			sum+=i;
			if(fc==0)
			{
				min=i;
				fc++;
			}
		}
	}
	if(fc==0) printf("%d", -1);
	else printf("%d\n%d", sum, min);
	
	return 0;
}
