#include <bits/stdc++.h>

using namespace std;

int dp[200001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	long long tmp = 1;
	for(int i=1;i<=(n+1)/2;i++)
	{
		cout << (m-n/2+i) << " ";
		tmp *= (m-n/2+i);
		tmp %= 998244353;
	}
	printf("\n%lld", tmp);

	return 0;
}