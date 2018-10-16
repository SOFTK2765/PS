#include <stdio.h>
#include <string.h>

char a[101][14];
char temp[14];

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
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%s", a[i]);
	for(int i=0;i<n;i++)
	{
		memset(temp, 0, sizeof(temp));
		strcpy(temp, a[i]);
		rev(temp);
		for(int j=i;j<n;j++)
			if(strcmp(temp, a[j])==0) printf("%d %c", strlen(a[j]), a[j][strlen(a[j])/2]);
	}
	
	return 0;
}
