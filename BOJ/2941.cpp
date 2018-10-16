#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	int count=0;
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
	{
		count++;
		if(a[i]=='c')
		{
			if(i<l-1)
				if(a[i+1]=='=' || a[i+1]=='-') i++;
		}
		if(a[i]=='d')
		{
			if(i<l-2)
			{
				if(a[i+1]=='z' && a[i+2]=='=') i+=2;
			}
			if(i<l-1)
			{
				if(a[i+1]=='-') i++;
			}
		}
		if(a[i]=='l')
		{
			if(i<l-1)
				if(a[i+1]=='j') i++;
		}
		if(a[i]=='n')
		{
			if(i<l-1)
				if(a[i+1]=='j') i++;
		}
		if(a[i]=='s')
		{
			if(i<l-1)
				if(a[i+1]=='=') i++;
		}
		if(a[i]=='z')
		{
			if(i<l-1)
				if(a[i+1]=='=') i++;
		}
	}
	printf("%d", count);
	
	return 0;
}
