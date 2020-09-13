#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i]);
		for(int i=0;i<n;i++)
			printf("%d ", a[n-1-i]);
		printf("\n");
	}

	return 0;
}