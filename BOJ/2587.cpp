#include <stdio.h>

int main()
{
	int a[5];
	int sum=0, min, temp;
	
	for(int i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	printf("%d\n", sum/5);
	for(int i=0;i<4;i++)
	{
		min = i;
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j]) min = j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("%d", a[2]);

	return 0;
}
