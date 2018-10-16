#include <stdio.h>
#include <string.h>

int ind=0;
char a[100][11];

void f1()
{
	printf("%d", 1);
	ind++;
}

void f4()
{
	printf("%d", 4);
	char temp[11];
	strcpy(temp, a[ind]);
	strcpy(a[ind], a[ind-1]);
	strcpy(a[ind-1], temp);
	ind--;
}

int main()
{
	int n, ch1, ch2;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%s", a[i]);
		if(strcmp(a[i], "KBS1")==0) ch1=i;
	}
	if(ch1!=0)
	{
		for(int i=0;i<ch1;i++)
			f1();
		for(int i=0;i<ch1;i++)
			f4();
	}
	for(int i=0;i<n;i++)
		if(strcmp(a[i], "KBS2")==0) ch2=i;
	if(ch2!=1)
	{
		for(int i=0;i<ch2;i++)
			f1();
		for(int i=0;i<ch2-1;i++)
			f4();
	}
	
	return 0;
}
