#include <bits/stdc++.h>

using namespace std;

long long cnt[100001], dp[100001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		cnt[tmp] += tmp;
	}
	dp[0] = cnt[0];
	dp[1] = cnt[1];
	dp[2] = cnt[2];
	for(int i=3;i<=100000;i++)
		dp[i] = max({dp[i-3]+cnt[i], dp[i-2]+cnt[i], dp[i-1]});
	printf("%lld", dp[100000]);

	return 0;
}