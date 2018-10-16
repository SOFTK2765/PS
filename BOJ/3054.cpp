#include <stdio.h>
#include <string.h>

int main()
{
	char a[16];
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<5;i++)
	{
		if(i==0 || i==4)
		{
			for(int j=0;j<l*4+1;j++)
			{
				if(j%4==2)
				{
					if(j%12==10) printf("*");
					else printf("#");
				}
				else printf(".");
				if(j==l*4) printf("\n");
			}
		}
		else if(i==1 || i==3)
		{
			for(int j=0;j<l*4+1;j++)
			{
				if(j%2==1)
				{
					if(j%12==9 || j%12==11) printf("*");
					else printf("#");
				}
				else printf(".");
				if(j==l*4) printf("\n");
			}
		}
		else if(i==2)
		{
			for(int j=0;j<l;j++)
			{
				if(j%3==2) printf("*.%c.", a[j]);
				else if((j-1)%3==2) printf("*.%c.", a[j]);
				else printf("#.%c.", a[j]);
				if(j==l-1)
				{
					if((l-1)%3==2) printf("*\n");
					else printf("#\n");
				}
			}
		}
	}
	
	return 0;
}
