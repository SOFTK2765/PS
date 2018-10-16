#include <stdio.h>

int main()
{
	int n, count=0;
	int a[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(;;)
		{
			if(a[n-1-i]<=a[n-2-i])
			{
				count++;
				a[n-2-i]--;
			}
			else break;
		}
	}
	printf("%d", count);
	
	return 0;
}
