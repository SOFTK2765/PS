#include <stdio.h>

int main()
{
	int a[10];
	int c[42];
	int sum=0;
	for(int i=0;i<42;i++)
		c[i]=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		c[a[i]%42]=1;
	}
	for(int i=0;i<42;i++)
		sum+=c[i];
	printf("%d", sum);
	
	return 0;
}
