#include <stdio.h>

int main()
{
	int a[3];
	int temp, min;
	char t[4];
	for(int i=0;i<3;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<2;i++)
	{
		min=i;
		for(int j=i+1;j<3;j++)
			if(a[min]>a[j]) min=j;
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	scanf("%s", t);
	for(int i=0;i<3;i++)
		printf("%d ",a[t[i]-'A']);
		
	return 0;
}
