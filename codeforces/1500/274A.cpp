#include <bits/stdc++.h>

using namespace std;

int a[100001], check[100001];

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	sort(a, a+n);
	for(int i=0;i<n;i++)
	{
		if(check[i]==0)
		{
			check[i] = 1;
			if(k==1) continue;
			long long now = 1LL*a[i]*k;
			int tmp = 2;
			while(now<=a[n-1] && binary_search(a, a+n, now))
			{
				check[lower_bound(a, a+n, now)-a] = tmp;
				tmp = tmp==1?2:1;
				now *= k;
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<n;i++)
		if(check[i]==1) cnt++;
	printf("%d", cnt);

	return 0;
}