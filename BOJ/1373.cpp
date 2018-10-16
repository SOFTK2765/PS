#include <stdio.h>
#include <string.h>
#include <math.h>

char a[1000001];
char b[4000001];

void rev(char *a)
{
	char temp;
	int l=strlen(a);
	for(int i=0;i<l/2;i++)
	{
		temp=*(a+i);
		*(a+i)=*(a+l-1-i);
		*(a+l-1-i)=temp;
	}
}

int main()
{
	scanf("%s", a);
	rev(a);
	for(int i=0, j=0;;i++)
	{
		int sum=0;
		for(j=0;j<3 && a[i*3+j]!='\0';j++)
			sum+=(int)(a[i*3+j]-'0')*pow(2, j);
		b[i]=(char)(sum+48);
		if(a[i*3+j]=='\0') break;
	}
	rev(b);
	printf("%s\n", b);
	
	return 0;
}
