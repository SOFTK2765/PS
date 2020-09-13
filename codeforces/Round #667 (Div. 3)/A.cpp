#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf(" %d %d", &a, &b);
		if(a>b) swap(a, b);
		printf("%d\n", ((b-a)/10)+((b-a)%10?1:0));
	}

	return 0;
}