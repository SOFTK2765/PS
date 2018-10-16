#include <stdio.h>
#include <math.h>

int main()
{
	int a, si;
	int n[20000];
	for(int i=0;i<20000;i++)
		n[i]=0;
	for(int i=1;i<=10000;i++)
	{
		a=i;
		si=i;
		for(int j=1;;j++)
		{
			a+=si%10;
			if(si/10==0) break;
			si/=10;
		}
		n[a]++;
	}
	for(int i=1;i<=10000;i++)
		if(n[i]==0) printf("%d\n", i);
	
	return 0;
}
