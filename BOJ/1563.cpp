#include <stdio.h>

int main()
{
	int n, res=1;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		res=(res*3)%1000000;
	
	return 0;
}
