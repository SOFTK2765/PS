#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int res = 2, tmp = 2;
	for(int i=0;i<n-1;i++)
	{
		printf("%d ", (res-1)%n+1);
		res += tmp++;
	}

	return 0;
}