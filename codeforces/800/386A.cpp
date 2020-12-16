#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
	int n;
	scanf("%d", &n);
	int mx = 0, mxi = 0;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		if(mx<a[i])
		{
			mx = a[i];
			mxi = i;
		}
	}
	sort(a, a+n);
	printf("%d %d", mxi+1, a[n-2]);

	return 0;
}