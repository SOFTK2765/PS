#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

int main()
{
	for(int i=2;i<=1000;i++)
		for(int j=i+i;j<=1000000;j += i)
			prime[j] = true;
	int n;
	scanf("%d", &n);
	for(int i=4;i<=n/2;i += 2)
		if(prime[n-i])
		{
			printf("%d %d", i, n-i);
			break;
		}

	return 0;
}