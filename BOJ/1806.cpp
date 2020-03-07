#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n, s;
	cin >> n >> s;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int l = 0, r = 0, sum = 0, mn = 987654321;
	while(l<n)
	{
		if(r==n)
		{
			if(sum>=s) mn = min(mn, r-l);
			sum -= a[l++];
		}
		else if(sum<s) sum += a[r++];
		else if(sum>=s)
		{
			mn = min(mn, r-l);
			sum -= a[l++];
		}
	}
	cout << (mn==987654321?0:mn);

	return 0;
}