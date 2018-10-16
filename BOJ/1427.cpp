#include <stdio.h>
#include <string.h>

int main()
{
	char a[11];
	int max;
	char temp;
	scanf("%s", a);
	
	for(int i=0;i<strlen(a)-1;i++)
	{
		max=i;
		for(int j=i+1;j<strlen(a);j++)
			if(a[max]<a[j]) max=j;
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
	printf("%s", a);
	
	return 0;
}
