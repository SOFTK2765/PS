#include <stdio.h>

int main()
{
	int t, s, n, p, q;
	
	scanf("%d", &t);
	
	for(int i=0;i<t;i++)
	{
		int sum=0;
		scanf("%d %d", &s, &n);
		
		for(int j=0;j<n;j++)
		{
			scanf("%d %d", &q, &p);
			sum+=q*p;
		}
		printf("%d\n", s+sum);
	}
	
	
	return 0;
}
