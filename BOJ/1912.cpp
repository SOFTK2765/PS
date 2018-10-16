#include <bits/stdc++.h>

using namespace std;

int a[100001], dp[100001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	dp[0] = a[0];
	for(int i=0;i<n;i++)
		dp[i] = max(dp[i-1]+a[i], a[i]);
	int mx = -987654321;
	for(int i=0;i<n;i++)
		mx = max(dp[i], mx);
	printf("%d", mx);

	return 0;
}