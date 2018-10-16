#include <stdio.h>

int main()
{
	int n, m, j, np=1, count=0;
	scanf("%d %d %d", &n, &m, &j);
	int p[20];
	for(int i=0;i<j;i++)
		scanf("%d", &p[i]);
	for(int i=0;i<j;i++)
	{
		for(int k=0;;k++)
		{
			if(np<=p[i] && p[i]<=np+m-1)
			{
				count+=k;
				break;
			}
			else if(p[i]<np)
				np--;
			else if(np+m-1<p[i])
				np++;
		}
	}
	printf("%d", count);
	
	return 0;
}
