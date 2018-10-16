#include <stdio.h>

bool a[247000];

int main()
{
	for(int i=2;i<=246912;i++)
		for(int j=2;i*j<=246912;j++)
			a[i*j]=true;
	int n, count;
	while(1)
	{
		count=0;
		scanf("%d", &n);
		if(n==0) break;
		for(int i=n+1;i<=2*n;i++)
			if(a[i]==false) count++;
		printf("%d\n", count);
	}
	
	return 0;
}
