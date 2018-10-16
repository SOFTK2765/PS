#include <stdio.h>

int main()
{
	int sum=0, i, j, now=0, min, temp, esc=0;
	int a[9], r[7];
	for(i=0;i<9;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<9;j++)
			if(sum-a[i]-a[j]==100) break;
		if(sum-a[i]-a[j]==100) break;
	}
	for(int k=0;k<9;k++)
		if(k!=i && k!=j)
		{
			r[now]=a[k];
			now++;
		}
	for(i=0;i<6;i++)
	{
		min=i;
		for(j=i+1;j<7;j++)
			if(r[min]>r[j]) min=j;
		temp=r[min];
		r[min]=r[i];
		r[i]=temp;
	}
	for(i=0;i<7;i++)
		printf("%d\n", r[i]);

	return 0;
}
