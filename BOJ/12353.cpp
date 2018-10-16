#include <stdio.h>

char s, t1, t2;
int a, b, c, d, sum;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		sum=0;
		scanf(" %c %d%c%d%c %d%c%d%c", &s, &a, &t1, &b, &t2, &c, &t1, &d, &t2);
		sum=a*120+b*10+c*120+d*10;
		if(s=='B') sum+=50;
		else if(s=='G') sum-=50;
		sum/=2;
		if(sum%10==0) printf("Case #%d: %d%c%d%c to %d%c%d%c\n", i+1, (sum/10-4)/12, t1, (sum/10-4)%12, t2, (sum/10+4)/12, t1, (sum/10+4)%12, t2);
		else printf("Case #%d: %d%c%d%c to %d%c%d%c\n", i+1, (sum/10-3)/12, t1, (sum/10-3)%12, t2, (sum/10+4)/12, t1, (sum/10+4)%12, t2);
	}
	
	return 0;
}
