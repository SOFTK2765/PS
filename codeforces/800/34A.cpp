#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	a[n] = a[0];
	int res1 = 0, res2 = 1, mn = abs(a[0]-a[1]);
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-a[i+1])<mn)
		{
			mn = abs(a[i]-a[i+1]);
			res1 = i;
			res2 = i+1;
		}
	}
	printf("%d %d", (res1%n)+1, (res2%n)+1);

	return 0;
}