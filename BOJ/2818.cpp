#include <stdio.h>

int row, col, u=1, d=6, l=4, r=3, f=2, b=5, sum=1;

void right()
{
	int temp;
	temp=u;
	u=l;
	l=d;
	d=r;
	r=temp;
	sum+=u;
}

void left()
{
	int temp;
	temp=u;
	u=r;
	r=d;
	d=l;
	l=temp;
	sum+=u;
}

void up()
{
	int temp;
	temp=u;
	u=f;
	f=d;
	d=b;
	b=temp;
	sum+=u;
}

void down()
{
	int temp;
	temp=u;
	u=b;
	b=d;
	d=f;
	f=temp;
	sum+=u;
}

int main()
{
	scanf("%d %d", &row, &col);
	for(int i=0;i<row;i++)
	{
		sum+=(col/4)*(u+d+r+l);
		for(int j=0;j<(col%4)-1;j++)
		{
			if(i%2==0) right();
			else left();
		}
		if(i!=row-1) down();
	}
	printf("%d", sum);
	
	return 0;
}
