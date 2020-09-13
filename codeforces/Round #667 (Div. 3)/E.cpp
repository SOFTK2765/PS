#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[200001];
int dp[200001];
int dpdp[200001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf(" %d %d", &n, &k);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i].first);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i].second);
		sort(a, a+n);
		map<int, int> mp;
		for(int i=0;i<n;i++)
			if(mp[a[i].first]!=0) mp[a[i].first]++;
			else mp[a[i].first] = 1;
		int posl = 0, posr = 0, cnt = 1, pos = 1;
		for(int i=1;i<n;i++)
		{
			posr = i;
			cnt++;
			while(a[posr].first-a[posl].first>k)
			{
				posl++;
				cnt--;
			}
			dp[i] = cnt;
		}
		for(int i=0;i<n;i++)
			dpdp[i] = 0;
		for(int i=0;i<n;i++)
		{
			int tmpmx = dp[i];
			for(int j=0;j<dp[i];j++)
				if(dp[i]<=dp[i-j])
				{
					break;
				}
			dpdp[i] = tmpmx;
		}
		for(int i=0;i<n;i++)
			printf("%d ", dpdp[i]);
	}

	return 0;
}