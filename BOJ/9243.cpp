#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char a[1001], b[1001];
	scanf("%s %s", a, b);
	int l=strlen(a);
	if(n%2==0)
	{
		for(int i=0;i<l;i++)
		{
			if(a[i]!=b[i])
			{
				printf("Deletion failed");
				break;
			}
			if(i==l-1)
				printf("Deletion succeeded");
		}	
	}
	else
	{
		for(int i=0;i<l;i++)
		{
			if(a[i]==b[i])
			{
				printf("Deletion failed");
				break;
			}
			if(i==l-1)
				printf("Deletion succeeded");
		}
	}
	
	return 0;
}
