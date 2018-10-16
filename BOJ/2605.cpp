#include <stdio.h>

int main()
{
	int n, temp;
	scanf("%d", &n);
	int a[n], s[n];
	for(int i=1;i<=n;i++)
		a[i-1]=i;
	for(int i=0;i<n;i++)
		scanf("%d", &s[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>i-s[i];j--)
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);

	return 0;
}
