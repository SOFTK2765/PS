#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char a[80];
	int c, p;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		c=0;
		p=0;
		scanf("%s", a);
		if(a[0]=='O')
		{
			c++;
			p+=c;
		}
		for(int j=1;j<strlen(a);j++)
		{
			if(a[j]=='O')
			{
				if(a[j-1]!='O') c=0;
				c++;
				p+=c;
			}
		}
		printf("%d\n", p);
	}
	
	return 0;
}
