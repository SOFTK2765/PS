#include <stdio.h>
#include <string.h>

int main()
{
	int k, n=0;
	char a[40];
	memset(a, 0, sizeof(a));
	scanf("%d", &k);
	k-=1;
	for(int i=0;;i++)
	{
		if(k%2==0) a[i]=4;
		else a[i]=7;
		if(i==0 && (k==1 || k==0)) break;
		k/=2;
		if(k==1)
		{
			a[i+1]=7;
			break;
		}
		else if(k==0)
		{
			a[i+1]=4;
			break;
		}
	}
	int l=strlen(a);
	for(int i=l-1;i>=0;i--)
		printf("%d", a[i]);
	
	return 0;
}
