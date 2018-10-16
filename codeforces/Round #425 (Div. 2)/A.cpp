#include <stdio.h>

int main()
{
	long long n, k, p=0;
	scanf("%lld %lld", &n, &k);
	if((n/k)%2==1) printf("YES");
	else printf("NO");
	
	return 0;
}
