#include <stdio.h>
#include <string.h>

int main()
{
	int n, k, now=0, count=0;
	int pos[100];
	char a[25], x[100];
	memset(a, 0, sizeof(a));
	memset(x, 0, sizeof(x));
	scanf("%d %d", &n, &k);
	for(int i=0;i<k;i++)
		scanf("%d %c", &pos[i], &x[i]);
	a[0]=x[k-1];
	for(int i=k-2;i>=0;i--)
	{
		if(a[(n*100+now+pos[i+1])%n]=='\0')
		{
			a[(n*100+now+pos[i+1])%n]=x[i];
			now=(n*100+now+pos[i+1])%n;
		}
		else
		{
			if(a[(n*100+now+pos[i+1])%n]!=x[i])
			{
				printf("!");
				return 0;
			}
			now=(n*100+now+pos[i+1])%n;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]=='\0') printf("?");
		else printf("%c", a[i]);
	}
	
	return 0;
}
