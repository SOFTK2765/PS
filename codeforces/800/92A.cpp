#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		if(sum+i>m) break;
		sum += i;
		if(i==n) i = 0;
	}
	printf("%d", m-sum);

	return 0;
}