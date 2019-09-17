#include <stdio.h>

int a[500001], b[500001], c[8001];

void merge(int *a, int l, int r)
{
	
	int nl=l, nr=(l+r)/2+1;
	int pos=l;
	while(nl<(l+r)/2+1 && nr<=r)
	{
		if(a[nl]<a[nr])
		{
			b[pos]=a[nl];
			nl++;
			pos++;
		}
		else
		{
			b[pos]=a[nr];
			nr++;
			pos++;
		}
	}
	while(nl<(l+r)/2+1)
	{
		b[pos]=a[nl];
		nl++;
		pos++;
	}
	while(nr<=r)
	{
		b[pos]=a[nr];
		nr++;
		pos++;
	}
	for(int i=l;i<=r;i++)
		a[i]=b[i];
}

void merge_sort(int *a, int l, int r)
{
	if(l==r) return;
	merge_sort(a, l, (l+r)/2);
	merge_sort(a, (l+r)/2+1, r);
	merge(a, l, r);
}

int main()
{
	int n, sum=0, max=0, count=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	merge_sort(a, 0, n-1);
	
	for(int i=0;i<n;i++)
		sum+=a[i];
	printf("%d\n", (int)(((double)sum/n)+ 0.5 * (sum < 0? -1: 1) ));
	
	printf("%d\n", a[(n+1)/2-1]);
	for(int i=0;i<n;i++)
		c[a[i]+4000]++;
	for(int i=1;i<8001;i++)
	{
		if(c[max]<c[i])
		{
			max=i;
			count=0;
		}
		else if(c[max]==c[i] && count==0)
		{
			count++;
			max=i;
		}
	}
	printf("%d\n", max-4000);
	printf("%d", a[n-1]-a[0]);

	return 0;
}