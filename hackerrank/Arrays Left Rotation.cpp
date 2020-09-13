#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	for(int i=d;i<n;i++)
		printf("%d ", a[i]);
	for(int i=0;i<d;i++)
		printf("%d ", a[i]);

	return 0;
}