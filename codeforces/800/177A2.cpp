#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf(" %d", &a[i][j]);
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += a[i][(n-1)/2];
		sum += a[(n-1)/2][i];
		sum += a[i][i];
		sum += a[n-1-i][i];
	}
	sum -= a[(n-1)/2][(n-1)/2]*3;
	printf("%d", sum);

	return 0;
}