#include <bits/stdc++.h>

using namespace std;

int a[100001];

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
		int posa = 0, posb = 0;
		while(posa<n && posb<n)
		{
			while(a[posa]<=0) posa++;
			while(a[posa]>0)
			{
				if(posb<posa) posb = posa;
				while(posb<n && a[posb]>=0) posb++;
				if(posb<n)
				{
					if(a[posa]<=-a[posb])
					{
						a[posb] += a[posa];
						a[posa] = 0;
					}
					else
					{
						a[posa] += a[posb];
						a[posb] = 0;
					}
				}
				if(posb>=n) break;
			}
		}
		long long sum = 0;
		for(int i=0;i<n;i++)
			if(a[i]>0) sum += a[i];
		printf("%lld\n", sum);
	}

	return 0;
}