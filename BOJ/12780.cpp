#include <stdio.h>
#include <string.h>

char h[100001], n[11];

int main()
{
	scanf("%s %s", h, n);
	int hl=strlen(h);
	int nl=strlen(n);
	int count=0;
	for(int i=0;i<hl;i++)
	{
		for(int j=0;j<nl;j++)
		{
			if(h[i]==n[j])
			{
				if(j==nl-1)
				{
					count++;
					break;
				}
				i++;
			}
			else
			{
				if(j==0) break;
				j=-1;
			}
		}
	}
	printf("%d", count);
	
	return 0;
}
