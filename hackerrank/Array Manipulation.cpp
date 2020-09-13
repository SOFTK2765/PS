#include <bits/stdc++.h>

using namespace std;

long long dp[10000001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++)
	{
		int tmp1, tmp2, tmp3;
		scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
		dp[tmp1] += tmp3;
		if(tmp2+1<=n) dp[tmp2+1] -= tmp3;
	}
	long long sum = 0, mx = 0;
	for(int i=1;i<=n;i++)
	{
		sum += dp[i];
		mx = max(mx, sum);
	}
	printf("%lld", mx);

	return 0;
}