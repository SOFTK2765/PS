#include <bits/stdc++.h>

using namespace std;

int a[7][7];

int main()
{
	for(int i=0;i<6;i++)
		for(int j=0;j<6;j++)
			scanf(" %d", &a[i][j]);
	int mx = -1987654321;
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			mx = max(mx, a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
	printf("%d", mx);

	return 0;
}