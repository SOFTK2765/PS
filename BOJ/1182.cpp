#include <stdio.h>

int n, s, count;
int a[21];

void f(int pos, int sum)
{
	if(pos==n)
	{
		if(sum==s) count++;
		return;
	}
	sum-=a[pos];
	f(pos+1, sum);
	sum+=a[pos];
	f(pos+1, sum);
}

int main()
{
	int sum=0;
	scanf("%d %d", &n, &s);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	f(0, sum);
	if(s==0) printf("%d", count-1);
	else printf("%d", count);
	
	return 0;
}
