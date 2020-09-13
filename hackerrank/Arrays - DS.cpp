#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	for(int i=n-1;i>=0;i--)
		printf("%d ", a[i]);

	return 0;
}