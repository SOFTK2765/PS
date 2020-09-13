#include <bits/stdc++.h>

using namespace std;

int a[300001];

int main()
{
	int n, q;
	scanf("%d %d", &n, &q);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	while(q--)
	{
		int x, y;
		scanf(" %d %d", &x, &y);
		printf("%d\n", (n-x-y+1)/2);
	}

	return 0;
}