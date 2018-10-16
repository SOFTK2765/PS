#include <stdio.h>

int a[30001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int s, max=0;
	for(int i=0;i<n-1;i++)
	{
		int count=0;
		if(a[i]>a[i+1])
		{
			s=a[i];
			while(s>a[i+1] && i<n-1)
			{
				count++;
				i++;
			}
			if(max<count) max=count;
		}
	}
	printf("%d", max);
	
	return 0;
}
