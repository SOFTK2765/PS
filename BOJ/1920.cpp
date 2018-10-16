#include <stdio.h>

int main()
{
	int n, m, check=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	int b[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d", &b[i]);
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				check++;
				break;
			}
		}
		printf("%d\n", check);
		check=0;
	}
	
	return 0;
}
