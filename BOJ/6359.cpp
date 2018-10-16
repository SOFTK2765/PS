#include <stdio.h>

bool a[101];

int main()
{
	int t, n, count;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		count=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
			a[i]=false;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;i*j<=n;j++)
			{
				if(a[i*j]==true) a[i*j]=false;
				else a[i*j]=true;
			}
		}
		for(int i=1;i<=n;i++)
			if(a[i]==true) count++;
		printf("%d\n", count);
	}
	
	return 0;
}
