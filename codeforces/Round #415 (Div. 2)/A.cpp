#include <stdio.h>

int main()
{
	int n, k, s=0;
	scanf("%d %d", &n, &k);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	for(int i=0;;i++)
	{
		if((static_cast<double>((s+i*k)/(n+i))+0.5)>=k)
		{
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}
