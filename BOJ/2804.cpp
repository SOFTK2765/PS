#include <stdio.h>
#include <string.h>

int main()
{
	char a[31], b[31];
	scanf("%s %s", a, b);
	int al, bl, si=-1, sj=-1, p=0;
	al=strlen(a);
	bl=strlen(b);
	for(int i=0;i<al && si==-1 && sj==-1 ;i++)
	{
		for(int j=0;j<bl;j++)
		{
			if(a[i]==b[j])
			{
				si=i;
				sj=j;
				break;
			}
		}
	}
	for(int i=0;i<bl;i++)
	{
		if(i==sj)
		{
			for(int j=0;j<al;j++)
				printf("%c", a[j]);
			p++;
		}
		else
		{
			for(int j=0;j<al;j++)
			{
			
				if(j==si)
				{
					printf("%c", b[p]);
					p++;
				}
				else printf(".");
			}
		}
		printf("\n");
	}
	
	return 0;
}
