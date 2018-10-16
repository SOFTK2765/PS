#include <stdio.h>
#include <string.h>

char a[5001];

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

int function(char *a)
{
	char b[5001];
	strcpy(b, a);
	rev(b);
	if(strcmp(a, b)==0) return 1;
	else return 0;
}

int main()
{
	scanf("%s", a);
	int l=strlen(a);
	for(int i=1;i<=l;i++)
	{
		int count=0;
		for(int j=0;j<l+1-i;j++)
		{
			char temp[5001];
			for(int k=j;k<j+i;k++)
			{
				for(int l=0;l<i;l++)
				{
					temp[l]=a[k+l];
				}
			}
			if(function(temp)==1)
			{
				count++;
				printf("%s\n", temp);
			}
		}
		printf("%d ", count);
	}
	
	return 0;
}
