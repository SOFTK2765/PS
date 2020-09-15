#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int n;
	scanf("%d", &n);
	int mx = 0, mn = 987654321;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		mx = max(mx, a[i]);
		mn = min(mn, a[i]);
	}
	int res = 0;
	for(int i=0;i<n;i++)
		if(mx==a[i])
		{
			for(int j=i;j>0;j--)
			{
				swap(a[j], a[j-1]);
				res++;
			}
			break;
		}
	for(int i=n-1;i>=0;i--)
		if(mn==a[i])
		{
			for(int j=i;j<n-1;j++)
			{
				swap(a[j], a[j+1]);
				res++;
			}
			break;
		}
	printf("%d", res);

	return 0;
}