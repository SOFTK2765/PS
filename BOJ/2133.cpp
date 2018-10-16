#include <stdio.h>

int n, sum, ind;
int a[17];

void f(int pos)
{
	if(pos==n)
	{
		int res=1;
		for(int i=0;a[i]!=0;i++)
			res*=a[i];
		sum+=res;
		return;
	}
	else if(pos>n) return;
	a[ind]=3;
	ind++;
	f(pos+2);
	ind--;
	a[ind]=2;
	ind++;
	f(pos+4);
	ind--;
	a[ind]=0;
}

int main()
{
	scanf("%d", &n);
	f(0);
	printf("%d", sum);
	
	return 0;
}
//8 153
//12 2131
