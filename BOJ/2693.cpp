#include <stdio.h>

int main()
{
	int n, temp, min;
	int a[10];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)
			scanf("%d", &a[j]);
		for(int j=0;j<9;j++)
		{
			min=j;
			for(int k=j+1;k<10;k++)
				if(a[k]<a[min]) min=k;
			temp=a[j];
			a[j]=a[min];
			a[min]=temp;
		}
			printf("%d\n", a[7]);
	}
	return 0;
}
