#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	char a[10];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		memset(a, 0, sizeof(a));
		scanf("%s", a);
		int l=strlen(a);
		for(int i=0;i<l/2;i++)
		{
			if((a[i]-'0')+(a[l-1-i]-'0')>=10)
			{
				printf("NO\n");
				break;
			}
			if(i==l/2-1) printf("YES\n");
		}
	}
	
	return 0;
}
