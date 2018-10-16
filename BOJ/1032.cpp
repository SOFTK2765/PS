#include <stdio.h>
#include <string.h>

int main()
{
    
    int n, i, j, c, cS;
    char a[50];
    char s[50];
    
    scanf("%d\n", &n);
    
    for(i=0;i<n;i++)
    {
    	gets(a);
    	
    	if(i==0)
    	{
		    strcpy(s, a);
		    cS=strlen(s);
		}
    	else
		{
			c=0;
			for(j=0;j<strlen(a);j++)
			{
				if(a[j]==s[j])
				{
					c++;
				}
				else
				{
					break;
				}
			}
			if(c<cS)
			{
				cS=c;
				strcpy(s, a);
			}
		}
    	
	}
    for(i=0;i<cS;i++)
    {
    	printf("%c", s[i]);
	}
	for(i=cS;i<strlen(s);i++)
	{
		printf("?");
	}
	
	return 0;
}
