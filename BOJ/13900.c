#include <stdio.h>

int main()
{
	int n, i, j;
	long long int sum=0, value=0;
	
	scanf("%d", &n);
	
	int array[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &array[i]);
	}
	
	for(i=n-2;i>=0;i--)
	{
		sum+=array[i+1];
		value+=sum*array[i];
	}
	
	printf("%lld", value);
	
	return 0;
}
