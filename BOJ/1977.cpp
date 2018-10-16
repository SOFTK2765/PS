#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, sum=0;
	scanf("%d %d", &m, &n);
	if((double)((int)(sqrt(n)))-sqrt(m)<0)
	{
		printf("%d", -1);
		return 0;
	}
	m=(int)(sqrt(m)+0.999999999);
	n=(int)(sqrt(n));
	if(m>n) m--;
	for(int i=m;i<=n;i++)
		sum+=i*i;
	printf("%d\n%d", sum, m*m);
	
	return 0;
}
