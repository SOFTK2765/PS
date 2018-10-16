#include <stdio.h>

int main()
{
	int a, b, r=0, m=0, count=0;
	scanf("%d %d", &a, &b);
	for(int i=1;count<b;i++)
		for(int j=0;j<i && count<b;j++)
		{
			r+=i;
			count++;
		}
		count=0;
	for(int i=1;count<a-1;i++)
		for(int j=0;j<i && count<a-1;j++)
		{
			m+=i;
			count++;
		}
	printf("%d", r-m);
	
	return 0;
}
