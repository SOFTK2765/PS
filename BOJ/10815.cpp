#include <stdio.h>
#include <algorithm>

using namespace std;

int a[500001];

int binsearch(int l, int r, int num)
{
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==num)
			return 1;
		else if(a[m]<num)
			l=m+1;
		else
			r=m-1;
	}
	return 0;
}

int main()
{
	int n, m;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	sort(a, a+n);
	scanf("%d", &m);
	for(int i=0;i<m;i++)
	{
		int b;
		scanf("%d", &b);
		printf("%d ", binsearch(0, n-1, b));
	}
	
	return 0;
}
