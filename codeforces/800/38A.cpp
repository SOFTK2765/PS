#include <bits/stdc++.h>

using namespace std;

int d[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<n;i++)
		scanf(" %d", &d[i]);
	int a, b;
	scanf(" %d %d", &a, &b);
	int sum = 0;
	for(int i=a;i<b;i++)
		sum += d[i];
	printf("%d", sum);

	return 0;
}