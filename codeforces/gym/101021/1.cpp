#include <bits/stdc++.h>

using namespace std;

char buf[3];

int main()
{
	int lo = 1, hi = 1000000;
	while(lo<=hi)
	{
		int mid = (lo+hi)/2;
		printf("%d\n", mid);
		fflush(stdout);
		scanf(" %s", buf);
		if(strcmp(buf, "<")==0) hi = mid-1;
		else lo = mid+1;
	}
	printf("! %d", hi);

	return 0;
}