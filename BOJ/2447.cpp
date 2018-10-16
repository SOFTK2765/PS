#include <stdio.h>

void space(int pos)
{
	if(pos==1)
	{
		printf(" ");
		return;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			space(pos/3);
		}
		printf("\n");
	}
}

void star(int pos)
{
	if(pos==1)
	{
		printf("*");
		return;
	}
	star(pos/3);
	if(pos==n) printf("\n");
}

void f(int pos)
{
	if(pos==1)
	{
		star(1);
		return;
	}
	if(pos==3)
	{
		star(3)
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	f(n);
	
	return 0;
}
