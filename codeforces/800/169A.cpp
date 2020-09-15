#include <bits/stdc++.h>

using namespace std;

int h[2001];

int main()
{
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	for(int i=0;i<n;i++)
		scanf(" %d", &h[i]);
	sort(h, h+n);
	printf("%d", h[b]-h[b-1]);

	return 0;
}