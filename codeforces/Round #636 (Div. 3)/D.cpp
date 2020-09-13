#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf(" %d %d", &n, &k);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i]);
		int lo = 2, hi = k*2, mn = 987654321;
		while(lo<=hi)
		{
			int mid = (lo+hi)/2, cnt = 0, cntl = 0, cntr = 0;
			for(int i=0;i<n/2;i++)
			{
				if(a[i]+a[n-i-1]<mid)
				{
					if(mid-a[i]<=k) cnt++;
					else if(mid-a[n-i-1]<=k) cnt++;
					else cnt += 2;
				}
				else if(a[i]+a[n-i-1]>mid)
				{
					if(mid-a[i]>=1) cnt++;
					else if(mid-a[n-i-1]>=1) cnt++;
					else cnt += 2;
				}
			}
			for(int i=0;i<n/2;i++)
			{
				if(a[i]+a[n-i-1]<mid)
				{
					if(mid-a[i]<=k) cntl++;
					else if(mid-a[n-i-1]<=k) cntl++;
					else cntl += 2;
				}
				else if(a[i]+a[n-i-1]>mid)
				{
					if(mid-a[i]>=1) cntl++;
					else if(mid-a[n-i-1]>=1) cntl++;
					else cntl += 2;
				}
			}
			for(int i=0;i<n/2;i++)
			{
				if(a[i]+a[n-i-1]<mid)
				{
					if(mid-a[i]<=k) cntr++;
					else if(mid-a[n-i-1]<=k) cntr++;
					else cntr += 2;
				}
				else if(a[i]+a[n-i-1]>mid)
				{
					if(mid-a[i]>=1) cntr++;
					else if(mid-a[n-i-1]>=1) cntr++;
					else cntr += 2;
				}
			}
			mn = min(mn, cnt);
			if(cntl<cntr) hi = mid-1;
			else lo = mid+1;
		}
		printf("%d\n", mn);
	}

	return 0;
}