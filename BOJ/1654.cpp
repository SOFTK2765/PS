#include <stdio.h>
#include <algorithm>

using namespace std;

long long a[10001], b[10001];
int k, n;

long long binsearch(int num)
{
	long long lo=1, hi=2500000000LL;
	while(lo<=hi)
	{
		long long m=(lo+hi)/2, count=0;
		for(int i=0;i<k;i++)
		{
			count+=a[i]/m;
			b[i]=a[i]/m;
		}
		if(count==num)
		{
			long long min=2500000000LL;
			for(int i=0;i<k;i++)
				if(b[i]!=0 && min>(a[i]%m)/b[i]) min=(a[i]%m)/b[i];
			return m+min;
		}
		else if(count>num)
			lo=m+1;
		else
			hi=m-1;
	}
	return lo-1;
}

int main()
{
	scanf("%d %d", &k, &n);
	for(int i=0;i<k;i++)
		scanf("%lld", &a[i]);
	sort(a, a+k);
	printf("%lld", binsearch(n));
	
	return 0;
}
