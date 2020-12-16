#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int tmp = 0, ntmp = 0, sum = 0;
	while(1)
	{
		sum += ntmp += ++tmp;
		if(sum>n) break;
	}
	printf("%d", tmp-1);

	return 0;
}