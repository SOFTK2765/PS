#include <stdio.h>

int n, min=100;
int a[20];

void f(int n, int count)
{
	if(n==1)
	{
		min=count;
		return;
	}
	else if(n<0) return;
	if(n%3==0 && count+1<min) f(n/3, count+1);
	if(n%2==0 && count+1<min) f(n/2, count+1);
	if(count+1<min)f(n-1, count+1);
}

int main()
{
	scanf("%d", &n);
	f(n, 0);
	printf("%d", min);
	
	return 0;
}
