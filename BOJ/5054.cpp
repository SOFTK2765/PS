#include <stdio.h>

int a[21];

int main()
{
	int t, n, min, temp;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d", &n);
		for(int j=0;j<n;j++)
			scanf("%d", &a[j]);
		for(int j=0;j<n-1;j++)
		{
			min=j;
			for(int k=j+1;k<n;k++)
				if(a[min]>a[k]) min=k;
			temp=a[min];
			a[min]=a[j];
			a[j]=temp;
		}
		printf("%d\n", (a[n-1]-a[0])*2);
	}
	
	return 0;
}
