#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){return a%b?gcd(b, a%b):b;}

int main()
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	int res;
	while(n>0)
	{
		res = 0;
		n -= gcd(a, n);
		if(n<=0) break;
		res = 1;
		n -= gcd(b, n);
	}
	printf("%d", res);

	return 0;
}