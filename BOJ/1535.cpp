#include <stdio.h>

int a[21], b[21];
bool c[21];
int n, asum, bsum, max;

int f(int pos)
{
	if(pos==n)
	{
		if(max<bsum && asum<100) return bsum;
		else return max;
	}
	c[pos]=false;
	asum-=a[pos];
	bsum-=b[pos];
	max=f(pos+1);
	c[pos]=true;
	asum+=a[pos];
	bsum+=b[pos];
	max=f(pos+1);
	return max;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		asum+=a[i];
	}
		
	for(int i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
		bsum+=b[i];
	}
	printf("%d", f(0));
	
	return 0;
}
