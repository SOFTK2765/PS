#include <stdio.h>
#include <string.h>

int main()
{
	int c, n, s, count;
	double m;
	int a[1000];
	scanf("%d", &c);
	for(int i=0;i<c;i++)
	{
		scanf("%d", &n);
		s=0;
		count=0;
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[i]);
			s+=a[i];
		}
		m=(double)(s)/n;
		for(int j=0;j<n;j++)
			if(a[j]>m) count++;
		printf("%.3f\n", 100*((double)(count)/n)+0.0005);
		memset(a, 0, sizeof(a));
	}
	
	return 0;
}
