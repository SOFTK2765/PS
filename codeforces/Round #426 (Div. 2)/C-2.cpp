#include <stdio.h>
#include <string.h>

bool f(int a, int b)
{
	int lo=1, hi=1000000;
	while(lo<=hi)
	{
		int m=(lo+hi)/2;
		if(1LL*m*m*m==1LL*a*b)
			return true;
		else if(1LL*m*m*m<1LL*a*b)
			lo=m+1;
		else
			hi=m-1;
	}
	return false;
}

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
				
		scanf("%d %d", &a, &b);
		if(f(a, b) && (1LL*a*a)%b==0 && (1LL*b*b)%a==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}
