#include <stdio.h>

int inp[250001];
int a[250001];
int b[250001];

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
	long long int sum=0;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf("%d", &inp[i]);
	for(int i=0;i<=n-k;i++)
	{
		for(int j=i;j<i+k;j++)
			a[j]=inp[j];
		merge_sort(a, i, i+k-1);
		sum+=a[i+k/2];
	}
	printf("%lld", sum);

	return 0;
}
