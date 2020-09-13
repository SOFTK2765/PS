#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i]);
		int sign = a[0]>0?1:-1, mx = -1000000001;
		long long sum = 0;
		for(int i=0;i<n;i++)
		{
			if(sign>0)
			{
				if(a[i]>0) mx = max(mx, a[i]);
				else
				{
					sign = -1;
					sum += mx;
					mx = a[i];
				}
			}
			else
			{
				if(a[i]<0) mx = max(mx, a[i]);
				else
				{
					sign = 1;
					sum += mx;
					mx = a[i];
				}
			}
		}
		sum += mx;
		printf("%lld\n", sum);
	}

	return 0;
}