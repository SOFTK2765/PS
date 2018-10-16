#include <stdio.h>
#include <string.h>

int main()
{
	char a[11], b[11];
	while(1)
	{
		int f=0, count=0;
		scanf("%s %s", a, b);
		if(strcmp(a, "0")==0 && strcmp(b, "0")==0) break;
		int l1=strlen(a);
		int l2=strlen(b);
		int l=(strlen(a)>strlen(b))?strlen(a):strlen(b);
		int s=(strlen(a)<strlen(b))?strlen(a):strlen(b);
		for(int i=0;i<l;i++)
		{
			if(i<s)
			{
				if(((a[l1-1-i]-'0')+(b[l2-1-i]-'0')+f)>=10)
				{
					f=1;
					count++;
				}
				else f=0;
			}
				
			else
			{
				if(l1==l2) break;
				else if(l1==l)
				{
					if(((a[l1-1-i]-'0')+f)>=10)
					{
						f=1;
						count++;
					}
					else f=0;
				}
				else if(l2==l)
				{
					if(((b[l2-1-i]-'0')+f)>=10)
					{
						f=1;
						count++;
					}
					else f=0;
				}
			}	
		}
		printf("%d\n", count);
	}
	
	return 0;
}
