#include <stdio.h>

int main()
{
	int a[10];
	int sum=0;
	scanf("%d", &a[0]);
	for(int i=1;i<=9;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	printf("%d", a[0]-sum);
	
	return 0;
}
