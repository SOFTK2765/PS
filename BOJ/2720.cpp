#include <stdio.h>

int main()
{
	int t, m, q, d, n, p;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d", &m);
		q=m/25;
		m%=25;
		d=m/10;
		m%=10;
		n=m/5;
		m%=5;
		p=m;
		printf("%d %d %d %d\n", q, d, n, p);
	}
	
	return 0;
}
