#include <stdio.h>

int main()
{
	int n, count=0, si, s, sn;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		if(i<100) count++;
		else if(i==1000) break;
		else
		{
			si=i;
			if((si%10)-((si/10)%10)==((si/10)%10)-(si/100)%10) count++;
		}
	}
	printf("%d", count);
	
	return 0;
}
