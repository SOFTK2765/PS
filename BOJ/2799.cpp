#include <stdio.h>

int main()
{
	int m, n;
	char a[501][502];
	int count[5];
	for(int i=0;i<5;i++)
		count[i]=0;
	scanf("%d %d", &m, &n);
	for(int i=0;i<5*m+1;i++)
		scanf("%s", &a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<5;k++)
			{
				if(a[j*5+1+k][i*5+1]=='.' || a[j*5+1+k][i*5+1]=='#')
				{
					count[k]++;
					break;
				}
			}
		}
	}
	for(int i=0;i<5;i++)
		printf("%d ", count[i]);
	
	return 0;
}
