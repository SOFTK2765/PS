#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long l1, r1, l2, r2, k;
	scanf("%lld %lld %lld %lld %lld", &l1, &r1, &l2, &r2, &k);
	long long res;
	if(r1<l2 || r2<l1) printf("0");
	else if(l1<=l2 && l2<=r1 && r1<=r2)
	{
		res = r1-l2+1;
		if(l2<=k && k<=r1) res--;
		printf("%lld", res<0?0:res);
	}
	else if(l2<=l1 && l1<=r2 && r2<=r1)
	{
		res = r2-l1+1;
		if(l1<=k && k<=r2) res--;
		printf("%lld", res<0?0:res);
	}
	else if(l1<=l2 && r2<=r1)
	{
		res = r2-l2+1;
		if(l2<=k && k<=r2) res--;
		printf("%lld", res<0?0:res);
	}
	else if(l2<=l1 && r1<=r2)
	{
		res = r1-l1+1;
		if(l1<=k && k<=r1) res--;
		printf("%lld", res<0?0:res);
	}

	return 0;
}