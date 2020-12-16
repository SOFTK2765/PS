#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a>b) swap(a, b);
	long long cnt = 0;
	while(a)
	{
		cnt += b/a;
		long long tmp = b;
		b = a;
		a = tmp%a;
	}
	printf("%lld", cnt);

	return 0;
}