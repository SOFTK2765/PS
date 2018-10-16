#include <bits/stdc++.h>

using namespace std;

int a[1001][4];
int dp[1001][4];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=1;j<=3;j++)
			scanf("%d", &a[i][j]);
	for(int i=1;i<=3;i++)
		dp[0][i] = a[0][i];
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			int mn = 987654321;
			for(int k=1;k<=3;k++)
				if(k!=j && mn>dp[i-1][k]) mn = dp[i-1][k];
			dp[i][j] = mn + a[i][j];
		}
	}
	int mn = 987654321;
	for(int i=1;i<=3;i++)
		if(mn>dp[n-1][i]) mn = dp[n-1][i];
	printf("%d", mn);

	return 0;
}