#include <stdio.h>

int main()
{
	int n, m, esc=0, s=0;
	int a[100];
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++)
			for(int k=j+1;k<n;k++)
				if(a[i]+a[j]+a[k]<=m && s<a[i]+a[j]+a[k]) s=a[i]+a[j]+a[k];
	printf("%d", s);
	
	return 0;
}
