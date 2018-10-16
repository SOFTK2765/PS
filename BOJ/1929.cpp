#include <stdio.h>

bool a[1000001];

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	a[1]=true;
	for(int i=2;i<1000;i++)
	{
		for(int j=2;;j++)
		{
			a[i*j]=true;
			if(i*j>1000000) break;
		}
	}
	for(int i=m;i<=n;i++)
		if(a[i]==false) printf("%d\n", i);
	
	return 0;
}
