#include <stdio.h>
#include <math.h>

int n;
int a[10];

int cal()
{
	int result=0, temp=n, count=1;
	for(int i=n;i>=2;i--)
	{
		if(a[i-1]==1)
		{
			if(i>2)
			{
				temp=temp+((i-1)*pow(10, count));
				count++;
			}
			else
			{
				result+=(temp+((i-1)*pow(10, count)));
				return result;
			}
		}
		else if(a[i-1]==2)
		{
			result+=temp;
			temp=i-1;
			count=1;
		}
		else if(a[i-1]==3)
		{
			result-=temp;
			temp=i-1;
			count=1;
		}
	}
	
	return result+1;
}

void f(int pos)
{
	if(pos==n)
	{
		if(cal()==0)
		{
			for(int i=1;i<n;i++)
			{
				printf("%d", i);
				if(a[i]==1) printf(" ");
				else if(a[i]==2) printf("+");
				else if(a[i]==3) printf("-");
			}
			printf("%d\n", n);
		}
		return;
	}
	for(int i=1;i<=3;i++)
	{
		a[pos]=i;
		f(pos+1);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<10;j++)
			a[j]=0;
		scanf("%d", &n);
		f(1);
		printf("\n");
	}
	
	return 0;
}
