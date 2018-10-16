#include <stdio.h>

int count;

void f(int n)
{
	if(n==0)
	{
		count++;
		return;
	}
	else if(n<0) return;
	for(int i=1;i<4;i++)
	{
		n-=i;
		f(n);
		n+=i;
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		count=0;
		scanf("%d", &n);
		f(n);
		printf("%d\n", count);
	}
	
	return 0;
}
