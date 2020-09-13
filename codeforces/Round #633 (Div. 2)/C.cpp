#include <bits/stdc++.h>

using namespace std;

long long a[100001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
			scanf(" %lld", &a[i]);
		long long mx = a[0];
		int mn = 0;
		for(int i=1;i<n;i++)
			if(mx>a[i])
			{
				long long tmp = mx-a[i];
				for(int j=31;j>=0;j--)
					if(tmp&(1<<j))
					{
						mn = max(mn, j+1);
						break;
					}
			}
			else mx = a[i];
		printf("%d\n", mn);
	}

	return 0;
}