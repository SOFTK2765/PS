#include <stdio.h>

int a[26];

int main()
{
	int n, save;
	while(1)
	{
		scanf("%d", &n);
		if(n==0) break;
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]);
		save=a[0];
		printf("%d ", a[0]);
		for(int i=1;i<n;i++)
		{
			if(a[i]==save) continue;
			else
			{
				printf("%d ", a[i]);
				save=a[i];
			}
		}
		printf("$\n");	
	}
	
	return 0;
}
