#include <stdio.h>
#include <string.h>

int f(char a[], char b[])
{
	int result=0;
	for(int i=0;;i++)
	{
		if(a[i]>b[i] && result==0) result=1;
		else if(a[i]<b[i] && result==0) result=-1;
		if(a[i]=='\0' && b[i]=='\0') return result;
		else if(a[i]=='\0') return -1;
		else if(b[i]=='\0') return 1;
	}
}

int main()
{
	int n, l, nowi=0, nowj=0, pass=0;
	char a[100][101], num[5000][101];
	memset(a, 0, sizeof(a));
	memset(num, 0, sizeof(num));
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%s", a[i]);
	for(int i=0;i<n;i++)
	{
		l=strlen(a[i]);
		for(int j=0;j<=l;j++)
		{
			if('0'<=a[i][j] && a[i][j]<='9')
			{
				if(a[i][j]=='0' && pass==1 && ('0'<=a[i][j+1] && a[i][j+1]<='9')) continue;
				num[nowi][nowj]=a[i][j];
				nowj++;
				pass=0;
			}
			else if(pass==0)
			{
				nowj=0;
				nowi++;
				pass=1;
			}
		}
	}
	int min;
	char temp[101];
	for(int i=0;i<nowi-1;i++)
	{
		min=i;
		for(int j=i+1;j<nowi;j++)
			if(f(num[min], num[j])==1) min=j;
		strcpy(temp, num[min]);
		strcpy(num[min], num[i]);
		strcpy(num[i], temp);
	}
	for(int i=0;i<nowi;i++)
	{
		l=strlen(num[i]);
		for(int j=0;j<l;j++)
			printf("%d", (int)(num[i][j])-48);
		printf("\n");
	}
		
	return 0;
}
