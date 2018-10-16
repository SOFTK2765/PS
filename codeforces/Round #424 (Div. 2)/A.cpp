#include <stdio.h>

int a[101], b[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int s=a[0], p=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1]) b[i]=0;
		else if(a[i]==a[i-1]) b[i]=1;
		else b[i]=2;
	}
	b[0]=0;
	if(n==1)
	{
		printf("YES");
		return 0;
	}
	for(int i=1;i<n;i++)
		if(b[i]<b[i-1]) p=1;
		
	if(p==1) printf("NO");
	else printf("YES");
	
	return 0;
}
