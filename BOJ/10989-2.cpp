#include <stdio.h>

int a[10001];

int main()
{
	int n, k;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &k);
		a[k]++;
	}
	for(int i=1;i<10001;i++)
	{
		while(1)
		{
			if(a[i]==0) break;
			a[i]--;
			printf("%d\n", i);
		}
	}
	
	return 0;
}
