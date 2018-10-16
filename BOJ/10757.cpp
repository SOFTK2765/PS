#include <stdio.h>
#include <string.h>

int main()
{
	char a[10000], b[10000], temp[10001];
	int l, f=0;
	for(int i=0;i<10001;i++) temp[10001]='\0';
	scanf("%s %s", a, b);
	if(strlen(a)>strlen(b))
	{
		l=strlen(a);
		for(int i=0;i<l-strlen(b);i++)
			temp[i]='0';
		strcat(temp, b+l-strlen(b));
		strcpy(b, temp);
	}
	else
	{
		l=strlen(b);
		for(int i=0;i<l-strlen(a);i++)
			temp[i]='0';
		strcat(temp, a+l-strlen(a));
		strcpy(a, temp);
	}
	for(int i=l-1;i>=0;i--)
	{
		if((int)(a[i]-'0')+(int)(b[i])-'0'>=10)
		{
			temp[i]=((int)(a[i]-'0')+((int)(b[i])-'0')+f-10);
			f=0;
			f++;
		}
		else temp[i]=((int)(a[i]-'0')+((int)(b[i])-'0')+f);
	}
	for(int i=0;i<strlen(temp);i++)
		printf("%d", temp[i]);
	
	return 0;
}
