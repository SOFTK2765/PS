#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main()
{
	int n;
	cin >> n;
	long long k = 0, fk = 1, pos = 1;
	dp[1] = 1;
	dp[2] = 3;
	bool flag = false;
	while(++k)
	{
		while(fk<=dp[k])
		{
			pos += k;
			if(fk>=3) dp[fk] = pos-1;
			if(pos>n)
			{
				flag = true;
				break;
			}
			fk++;
		}
		if(flag) break;
	}
	cout << fk;

	return 0;
}