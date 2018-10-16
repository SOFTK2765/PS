#include <stdio.h>

int main()
{
	int n, k, min, temp;
	scanf("%d %d", &n, &k);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<k;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
			if(a[min]>a[j]) min=j;
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("%d", a[k-1]);
		
	return 0;
}
