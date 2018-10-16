#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[1000], b[1000];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	int min, temp, sum=0, count=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
			if(b[min]>b[j]) min=j;
		temp=b[min];
		b[min]=b[i];
		b[i]=temp;
	}
	min=10001;
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])
			if(a[i]<min) min=a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i] && a[i]!=min)
		{
			sum+=a[i];
			count++;
		}
	}
	sum+=(min*count);
	printf("%d", sum);
		
	return 0;
}
