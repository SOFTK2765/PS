#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, a, b, c;
	scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
	int tmp = (4-(n%4))%4;
	if(tmp==0) printf("0");
	else if(tmp==1) printf("%lld", min({a, b+c, c*3}));
	else if(tmp==2) printf("%lld", min({a*2, b, c*2}));
	else if(tmp==3) printf("%lld", min({a*3, a+b, c}));

	return 0;
}