#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b, x, y, n;
		scanf(" %d %d %d %d %d", &a, &b, &x, &y, &n);
		if(a>b)
		{
			swap(a, b);
			swap(x, y);
		}
		else if(a==b)
		{
			if(x>y) swap(x, y);
		}
		long long res;
		if(a-n>=x) res = (long long)(a-n)*b;
		else if(b-(n-(a-x))>=y) res = (long long)x*(b-(n-(a-x)));
		else res = (long long)x*y;
		if(b-n>=y) res = min(res, (long long)a*(b-n));
		else if(a-(n-(b-y))>=x) res = min(res, (long long)(a-(n-(b-y)))*y);
		printf("%lld\n", res);
	}

	return 0;
}