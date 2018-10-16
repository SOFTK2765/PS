#include <stdio.h>

int main()
{
	int a[8], b[8];
	for(int i=0;i<8;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<8;i++)
		b[i]=a[i];
	int min, temp;
	for(int i=0;i<7;i++)
	{
		min=i;
		for(int j=i+1;j<8;j++)
			if(b[min]>b[j]) min=j;
		temp=b[min];
		b[min]=b[i];
		b[i]=temp;
	}
	printf("%d\n", b[3]+b[4]+b[5]+b[6]+b[7]);
	for(int i=0;i<8;i++)
		for(int j=3;j<8;j++)
			if(a[i]==b[j]) printf("%d ", i+1);
	
	return 0;
}
