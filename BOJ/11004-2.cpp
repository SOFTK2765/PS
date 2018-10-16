#include <stdio.h>

int a[5000001];
int b[5000001];

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
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	merge_sort(a, 0, n-1);
	printf("%d", a[k-1]);

	return 0;
}
