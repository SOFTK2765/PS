#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	scanf("%lld", &n);
	if(n%2==1) printf("%lld", -(n+1)/2);
	else printf("%lld", (n+1)/2);

	return 0;
}