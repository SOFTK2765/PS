#include <stdio.h>

int a[10];

int main()
{
	int n, max=0;
	scanf("%d", &n);
	while(1)
	{
		a[n%10]++;
		n/=10;
		if(n==0) break;
	}
	for(int i=0;i<10;i++)
		if(max<a[i] && i!=6 && i!=9) max=a[i];
	if(max<(a[6]+a[9]+1)/2) printf("%d", (a[6]+a[9]+1)/2);
	else printf("%d", max);
	
	return 0;
}
