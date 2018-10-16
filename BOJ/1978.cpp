#include <stdio.h>

bool a[1001];

int main()
{
	int n, m, count=0;
	scanf("%d", &n);
	a[1]=true;
	for(int i=2;i<33;i++)
	{
		for(int j=2;;j++)
		{
			a[i*j]=true;
			if(i*j>1000) break;
		}
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d", &m);
		if(a[m]==false) count++;
	}
	printf("%d", count);
	
	return 0;
}
