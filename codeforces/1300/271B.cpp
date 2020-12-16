#include <bits/stdc++.h>

using namespace std;

int a[501][501], dp[501][501];

int main()
{
	vector<int> prime(110001, 1);
	prime[0] = prime[1] = 0;
	for(int i=4;i<=110000;i += 2)
		prime[i] = 0;
	for(int i=3;i*i<=110000;i += 2)
		if(prime[i])
			for(int j=i+i;j<=110000;j += i)
				prime[j] = 0;
	vector<int> v;
	for(int i=0;i<=110000;i++)
		if(prime[i]) v.push_back(i);
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf(" %d", &a[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			dp[i][j] = v[lower_bound(v.begin(), v.end(), a[i][j])-v.begin()]-a[i][j];
	int mn = 987654321;
	for(int i=0;i<n;i++)
	{
		int sum = 0;
		for(int j=0;j<m;j++)
			sum += dp[i][j];
		mn = min(mn, sum);
	}
	for(int i=0;i<m;i++)
	{
		int sum = 0;
		for(int j=0;j<n;j++)
			sum += dp[j][i];
		mn = min(mn, sum);
	}
	printf("%d", mn);

	return 0;
}