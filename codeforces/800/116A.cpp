#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0, mx = 0;
	for(int i=0;i<n;i++)
	{
		int a, b;
		scanf(" %d %d", &a, &b);
		cnt -= a;
		cnt += b;
		mx = max(mx, cnt);
	}
	printf("%d", mx);

	return 0;
}