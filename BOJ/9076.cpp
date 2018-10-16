#include <stdio.h>

int main()
{
	int t, min, temp;
	int a[5];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<5;j++)
			scanf("%d", &a[j]);
		for(int j=0;j<4;j++)
		{
			min=j;
			for(int k=j+1;k<5;k++)
				if(a[min]>a[k]) min=k;
			temp=a[min];
			a[min]=a[j];
			a[j]=temp;
		}
		if(a[3]-a[1]>=4) printf("KIN\n");
		else printf("%d\n", a[1]+a[2]+a[3]);
	}
	
	return 0;
}
