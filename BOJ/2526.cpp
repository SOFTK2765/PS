#include <stdio.h>

int main()
{
	int n, p, d, max, temp, s, c=1;
	scanf("%d %d", &n, &p);
	int a[100];
	for(int i=0;i<100;i++)
		a[i]=0;
	d=n;
	for(int i=0;i<2*p;i++)
	{
		d=d*n%p;
		a[d]++;
		if(a[d]==3)
		{
			a[d]--;
			break;
		}
	}
	for(int i=0;i<p-1;i++)
	{
		max=i;
		for(int j=i+1;j<p;j++)
			if(a[max]<a[j]) max=j;
		temp=a[max];
		a[max]=a[i];
		a[i]=temp;
	}
	s=a[0];
	for(int i=1;i<p;i++)
	{
		if(s==a[i]) c++;
		else break;
	}
	printf("%d", c);
	
	return 0;
}
