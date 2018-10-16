#include <stdio.h>

int main()
{
	int n, count=1;
	char a[51];
	scanf("%d", &n);
	scanf("%s", a);
	for(int i=0;i<n;i++)
	{
		if(a[i]=='S') count++;
		else
		{
			if(a[i+1]=='L')
			{
				count++;
				if(i+1==n-1) break;
				i++;
			}
		}
	}
	if(n<count) printf("%d", n);
	else printf("%d", count);	
	
	return 0;
}
