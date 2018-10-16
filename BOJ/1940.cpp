#include <stdio.h>

int main()
{
	int n, m, count=0;
	scanf("%d %d", &n, &m);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==0) break;
			if(a[j]==0 || i==j) continue;
			if(a[i]+a[j]==m)
			{
				a[i]=0;
				a[j]=0;
				count++;
				break;
			}
		}
	}
	printf("%d", count);
	
	return 0;
}
