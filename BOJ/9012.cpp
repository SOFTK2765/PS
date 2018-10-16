#include <stdio.h>
#include <string.h>

char a[51];

int main()
{
	int t, count, esc;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%s", a);
		esc=0;
		count=0;
		int l=strlen(a);
		for(int j=0;j<l;j++)
		{
			if(a[j]=='(') count++;
			else if(a[j]==')') count--;
			if(count<0)
			{
				printf("NO\n");
				esc=1;
				break;
			}
		}
		if(esc==1) continue;
		if(count==0) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
